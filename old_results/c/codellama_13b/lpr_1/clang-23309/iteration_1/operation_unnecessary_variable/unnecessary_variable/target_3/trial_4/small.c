
fn11:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        mov     DWORD PTR [rbp-8], 1
        jmp     .L3
.L3:
        mov     eax, DWORD PTR [rbp-8]
        leave
        ret
