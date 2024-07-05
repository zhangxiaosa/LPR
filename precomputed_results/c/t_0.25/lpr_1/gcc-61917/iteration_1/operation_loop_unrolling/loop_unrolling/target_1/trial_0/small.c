int k;
signed o;
unsigned fn3(p1) {
  int i;
  for (i = 0; i < 5; i++) {
    // Unrolled loop
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }
}

int main() {
  // Main function body
}