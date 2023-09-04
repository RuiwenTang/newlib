
;int32_t toyos_syscall2(u_int32_t arg0, u_int32_t arg1, u_int32_t arg2);
global toyos_syscall2
toyos_syscall2:
    ; save ebx and ecx
    push ebx
    push ecx

    ; arg0 in eax
    mov eax, [esp + 8]
    ; arg1 in ebx
    mov ebx, [esp + 12]
    ; arg2 in ecx
    mov ecx, [esp + 16]

    int 0x80

    ; restore ebx and ecx
    pop ecx
    pop ebx
    ret

; int32_t toyos_syscall3(u_int32_t arg0, u_int32_t arg1, u_int32_t arg2, u_int32_t arg3);
global toyos_syscall3
toyos_syscall3:
    ; save ebx and ecx edx
    push ebx
    push ecx
    push edx

    ; arg0 in eax
    mov eax, [esp + 12]
    ; arg1 in ebx
    mov ebx, [esp + 16]
    ; arg2 in ecx
    mov ecx, [esp + 20]
    ; arg3 in edx
    mov edx, [esp + 24]

    int 0x80

    ; restore ebx and ecx edx
    pop edx
    pop ecx
    pop ebx
    ret
