#include <stdio.h>

typedef struct {
  signed q : 22;
} p;

p w = {0x12345678, 999};

int main() {
  return 0;
}