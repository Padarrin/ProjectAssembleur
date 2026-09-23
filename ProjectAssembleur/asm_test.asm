option casemap:none     ; noms sensibles à la casse (comme en C++)

.data                   ; variables globales initialisées
counter QWORD 0

.const                  ; données en lecture seule
message BYTE "hello", 0

.code                   ; code
asm_add PROC
    lea     rax, [rcx + rdx]
    ret
asm_add ENDP

asm_sub PROC
    sub     rcx, rdx
    mov     rax, rcx
    ret
asm_sub ENDP

asm_mul PROC
    imul    rcx, rdx
    mov     rax, rcx
    ret
asm_mul ENDP

asm_div PROC
    mov     r8, rdx
    mov     rax, rcx
    cdq
    idiv    r8
    ret
asm_div ENDP

END