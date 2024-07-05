struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;

  while (1) {
    // Inlined code from fn1
    p.k;

    while (1) {
    }
  }
}

int main() {}