
[BITS 32]

SECTION .init

global _init
_init:
    push    ebp
    mov     ebp, esp

SECTION .fini

global _fini
_fini:
    push    ebp
    mov     ebp, esp