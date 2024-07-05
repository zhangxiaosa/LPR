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

d l;

e fn2(p1) {
  struct h p;
  p.k;
w:
  goto w;

  // Inlined fn1
  // p5.k is replaced with p.k
}

int main() {

}
