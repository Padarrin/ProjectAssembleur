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

asm_mul8 PROC
    lea     rax, [rcx * 8]
    ret
asm_mul8 ENDP

asm_find PROC
    
    ret     0
asm_find ENDP

END