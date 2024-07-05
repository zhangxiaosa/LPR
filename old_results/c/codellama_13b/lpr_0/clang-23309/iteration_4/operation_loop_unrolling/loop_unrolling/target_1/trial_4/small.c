
.global fn2
.type fn2, @function
fn2:
  pushq   %rbp
  movq    %rsp, %rbp
  movl    %edi, -4(%rbp)
  movl    %esi, -8(%rbp)
  movl    -8(%rbp), %eax
  movl    -4(%rbp), %edx
  subl    %edx, %eax
  movl    %eax, %eax
  popq    %rbp
  ret

.global fn6
.type fn6, @function
fn6:
  pushq   %rbp
  movq    %rsp, %rbp
  movl    %edi, -4(%rbp)
  movl    %esi, -8(%rbp)
  movl    -8(%rbp), %eax
  movl    -4(%rbp), %edx
  movl    %edx, %eax
  andl    $1, %eax
  shll    $8, %eax
  subl    %eax, (short)0xBCD1
  movl    %eax, %eax
  popq    %rbp
  ret

.global fn10
.type fn10, @function
fn10:
  pushq   %rbp
  movq    %rsp, %rbp
  movl    %edi, -4(%rbp)
  movl    -4(%rbp), %eax
  movl    $250, -8(%rbp)
  movl    -8(%rbp), %edx
  movl    $1, %eax
  andl    $1, %edx
  shll    $8, %eax
  subl    %eax, (short)0xBCD1
  movl    %eax, %eax
  popq    %rbp
  ret

.global main
.type main, @function
main:
  pushq   %rbp
  movq    %rsp, %rbp
  movl    $0, %eax
  movl    %eax, %edi
  call    fn10
  popq    %rbp
  ret
