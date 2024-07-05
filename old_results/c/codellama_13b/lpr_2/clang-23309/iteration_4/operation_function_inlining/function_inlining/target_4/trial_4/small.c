
fn12:
  movl  %edx, %ecx
  movl  %ebx, %edx
  movl  %eax, %ebx
  movl  %ecx, %edx
  movl  %ebx, %eax
  cmpq  $0x294A85636008822D, %rdx
  sete  %dl
  andq  $1, %rdx
  retq
