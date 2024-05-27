.386
.model flat, C
option casemap :none

.code


_asm32_mysafe_strlen proc
    mov eax, [esp+4]  ; Get the pointer to the string from the stack
    mov ebx, eax      ; Point to the start of the string
    cmp ebx, 0        ; return 0 if string is null
    jz loop_end    
loop_start:
    inc eax
    cmp byte ptr [eax], 0
    jnz loop_start
loop_end:
    sub eax, ebx
    ret

_asm32_mysafe_strlen endp

asm32_mysafe_strcpy proc

    ret

asm32_mysafe_strcpy endp

end
