
fn2:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     DWORD PTR [rbp-12], edx
        mov     eax, DWORD PTR [rbp-4]
        mov     ecx, DWORD PTR [rbp-8]
        mov     edx, DWORD PTR [rbp-12]
        call    fn1
        mov     DWORD PTR [rbp-16], eax
        mov     eax, DWORD PTR [rbp-16]
        mov     edx, DWORD PTR [rbp-4]
        mov     ecx, DWORD PTR [rbp-8]
        mov     DWORD PTR [rbp-12], eax
        mov     eax, DWORD PTR [rbp-12]
        pop     rbp
        ret
