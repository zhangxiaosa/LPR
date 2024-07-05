int k;
signed o;
unsigned fn3(p1) {
  for (;;) {
    // Unrolled loop iteration 1
    k = 0;
    p1 = o - p1;

    // Unrolled loop iteration 2
    k = -6;
    p1 = o - p1;

    // Unrolled loop iteration 3
    k = -12;
    p1 = o - p1;
  }
}

int main() {}
