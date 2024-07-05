
<SYS>

#include <stdio.h>

int fn1(char p1, char p2) {
  return p1 * p2;
}

int main() {
  char p1 = 'a';
  char p2 = 'b';
  int result = fn1(p1, p2);
  printf("The result of fn1 is: %d\n", result);
  return 0;
}

</SYS>
