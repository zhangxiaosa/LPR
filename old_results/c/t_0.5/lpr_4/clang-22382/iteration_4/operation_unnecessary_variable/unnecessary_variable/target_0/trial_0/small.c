struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  struct h r;
  for (;;) {
    p = r;
  }
}

int main() {}
