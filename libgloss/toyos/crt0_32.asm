
[BITS 32]
SECTION .text
global _start
extern main
extern environ
extern __env
extern atexit
extern exit

extern _init
extern _fini


_start:
  ; call init hooks
  ; lea eax, [hardware_init_hook]
  ; cmp eax, 0
  ; je  L1    ; hardware_init_hook not exists
  ; call eax
;L1:
  ; lea eax, [software_init_hook]
  ; cmp eax, 0
  ; je L2     ; software_init_hook not exists
  ; call eax
L2:
  ; register a function to be called at normal process termination
  push _fini
  call atexit
  pop eax

  ; set default environment
  mov eax, environ
  mov dword [eax], __env

  call _init
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

