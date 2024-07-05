
unsigned fn1(unsigned p1, int p2) { return p2; }
struct k {
  unsigned l;
};
struct m {
  signed n : 18;
  signed o : 1;
};
signed p;
struct k q;
int r;
static signed s = -5L;
int u;

signed fn4() {
  struct m z;
  // fn2(p, z, q, q, q.l); // fn2 is not used anywhere, so we can safely remove it
}

int main() { fn4(); }
