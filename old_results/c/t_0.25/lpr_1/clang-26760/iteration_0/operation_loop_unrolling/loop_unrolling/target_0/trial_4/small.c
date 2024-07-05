typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

int main() {
  c j = 0x24F96B7BL;

  while (j >= 4) {
    j -= 4;
  }

  if (j == 3) {
    --j;
  }

  if (j == 2) {
    --j;
  }

  if (j == 1) {
    --j;
  }
}