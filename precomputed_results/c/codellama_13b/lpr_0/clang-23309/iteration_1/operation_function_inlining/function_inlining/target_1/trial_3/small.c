nasm
fn11:
    push rbp
    mov rbp, rsp
    sub rsp, 16
    mov QWORD PTR [rbp-8], rdi
    mov QWORD PTR [rbp-16], rsi
    mov DWORD PTR [rbp-20], rdx
    mov BYTE PTR [rbp-24], rcx
    mov eax, 1
    pop rbp
    ret
