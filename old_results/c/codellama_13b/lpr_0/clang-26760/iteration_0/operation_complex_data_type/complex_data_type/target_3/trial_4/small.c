
typedef unsigned e;

e f;

typedef short a;

short g;

a fn1() {
  unsigned i;
  unsigned j = 0x24F96B7BL;
  unsigned l = 1L;
  unsigned m = j;
  unsigned n = g;
  unsigned o = n;
q:;
  i = g >> l;
  i = i << m;
  if (i) {
    goto q;
  }
}

int main() {}
