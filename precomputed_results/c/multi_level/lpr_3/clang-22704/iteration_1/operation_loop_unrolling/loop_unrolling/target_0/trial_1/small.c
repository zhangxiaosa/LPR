int fd;
int fe;

char fn1() {
  if (fe) {
    goto i;
  }

  // Unrolled loop iteration 1
  fd = 6L;

  // Unrolled loop iteration 2
  fd = 6L;

  // Unrolled loop iteration 3
  fd = 6L;

  // ...

  // Unrolled loop iteration N
  fd = 6L;

i:
  return 0;
}

int main() {}
