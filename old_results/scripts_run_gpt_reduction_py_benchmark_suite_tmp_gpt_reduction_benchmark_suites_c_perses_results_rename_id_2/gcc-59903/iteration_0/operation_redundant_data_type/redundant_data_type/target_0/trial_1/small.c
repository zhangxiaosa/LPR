struct {
  signed j;
  signed k;
  int l;
};

unsigned m[4];
struct {
  signed j;
  signed k;
  int l;
} n[2];
unsigned fn3(signed p1) {
  struct {
    signed j;
    signed k;
    int l;
  } r;
  unsigned s;
  struct {
    signed j;
    signed k;
    int l;
  } v;
  int w;
  int a;
  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r.j = 0; r.j <= 2; r.j += 1) {
        n = v;
        v.l = m[r.j];
        struct {
          signed j;
          signed k;
          int l;
        } b;
        w = n.l && r.k;
        for (; a; a += 1)
          n = b;
      }
  return p1;
}

int main() {}
