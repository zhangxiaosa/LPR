struct hjson {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2(p1) {
  struct hjson p;
  int q;
  while(1); // Inlined fn1
  struct hjson r1;
  for (;;) p = r1 = p;
}

int main() {}
