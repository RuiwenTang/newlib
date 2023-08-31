
[BITS 32]
SECTION .text
global _start
extern __bss_start
extern __bss_end
extern main
extern environ
extern __env
extern __do_global_dtors
extern __do_global_ctors
extern hardware_init_hook
extern software_init_hook
extern atexit
extern exit

_start:
  ; init BSS
  ; reset to zero from __bss_start to __bss_end
  mov edi, __bss_start
  mov ecx, __bss_end
  sub ecx, edi
  xor eax, eax
  rep

  ; call init hooks
  lea eax, [hardware_init_hook]
  cmp eax, 0
  je  L1    ; hardware_init_hook not exists
  call eax
L1:
  lea eax, [software_init_hook]
  cmp eax, 0
  je L2     ; software_init_hook not exists
  call eax
L2:
  ; register a function to be called at normal process termination
  push __do_global_dtors
  call atexit
  pop eax

  ; call init function
  call __do_global_ctors

  ; set default environment
  mov eax, environ
  mov edx, [esp + 8]
  cmp edx, 0
  je L3
  mov dword [eax], edx
  jmp L4
L3:
  mov dword [eax], __env
L4:
  ; arguments are already on the stack
  ; call the user's main function
  call main

  ; call exit from the C library so atexit gets called
  ; also c++ destructors get run.
  ; This calls our exit routine below when it's done.
  push eax
  call exit
  
  ; can not be reach here
  jmp $


SECTION .note.GNU-stack noalloc noexec nowrite progbits

