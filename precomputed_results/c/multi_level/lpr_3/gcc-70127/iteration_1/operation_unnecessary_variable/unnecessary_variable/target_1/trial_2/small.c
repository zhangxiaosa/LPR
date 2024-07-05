#include <stdio.h>

struct p {
  signed q : 22;
};

struct p v[1];

int main() {
  v[0].q = 816;

  printf("checksum = %X\n", v[0].q);

  return 0;
}
