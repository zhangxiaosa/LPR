#include<stdio.h>

struct p {
  int ab;
  int q : 22;
};

int main() {
  struct p a = {0x1C87E74F, 816};
  printf("checksum = %X\n", a.q);
  return 0;
}