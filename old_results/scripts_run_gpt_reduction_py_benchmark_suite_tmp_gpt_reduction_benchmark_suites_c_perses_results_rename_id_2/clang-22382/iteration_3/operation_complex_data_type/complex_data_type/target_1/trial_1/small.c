#include <stdlib.h>

int main() {
  int i;
  long j;
  unsigned k;
  unsigned p_i;
  long p_j;
  unsigned p_k;

  while (1) {
    struct Data {
      int i;
      long j;
      unsigned k;
    } p;

    p_i = p.i;
    p_j = p.j;
    p_k = p.k;

    // Rest of the code...
  }
}