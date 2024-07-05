
main:
  movl    $0, -4(%rbp)
  call    fn13
  movq    -4(%rbp), %rdi
  movq    $0, %rsi
  movq    $0, %rdx
  call    fn9
  movq    %rax, -8(%rbp)
  movq    -8(%rbp), %rdi
  movl    -4(%rbp), %esi
  call    fn1
  movl    $0, %eax
  ret
