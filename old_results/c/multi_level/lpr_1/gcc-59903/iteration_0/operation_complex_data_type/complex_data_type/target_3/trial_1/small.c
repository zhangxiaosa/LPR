typedef signed int a;

typedef int c;

typedef unsigned char d;

typedef unsigned int e;

struct i { a j; c l; };

e m[4];

struct i n[2];

unsigned fn3(void) {
  struct i r;
  e s;
  struct i v = {0x15};
  c w;
  c a;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n[0] = v;
        v.l = m[r.j];
        struct i b;
        w = fn1(n[0].l, 2);

        for (; a; a -= 4) {
          n[0] = b;
        }
      }
    }
  }

  return 0;
}

int main(void) {
}
