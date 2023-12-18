struct Data {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct Data p;
  for (;;) {
    struct Data r1;
    r1 = p;
  }
}

int main() {}
