struct H {
  short i;
  unsigned k;
};

unsigned fn2() {
  struct H p;
  for (;;) {
    p = p;
  }
}

int main() {}
