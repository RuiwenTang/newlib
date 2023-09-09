
[BITS 32]

SECTION .init
    pop ebp
    ret

SECTION .fini
    pop ebp
    ret

SECTION .note.GNU-stack noalloc noexec nowrite progbits
