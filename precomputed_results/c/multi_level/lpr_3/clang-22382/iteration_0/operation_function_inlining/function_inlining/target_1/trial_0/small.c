typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  c j;
  unsigned k;
};

struct h fn2(p1) {
  struct h p;
  struct h p5;
  p5.k;
w:;
  goto w;
}

int main() {
  fn2(0);
  return 0;
}