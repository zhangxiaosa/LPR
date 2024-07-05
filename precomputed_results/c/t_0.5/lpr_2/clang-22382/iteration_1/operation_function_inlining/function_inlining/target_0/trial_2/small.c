typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

e fn2() {
  struct h p;
  p.k;
  for (;;) {
    p = p;
  }
}

int main() {}
