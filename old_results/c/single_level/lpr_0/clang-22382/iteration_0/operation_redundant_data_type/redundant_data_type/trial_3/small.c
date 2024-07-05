typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned int uint32_t;
typedef unsigned int uint32_t;
typedef unsigned int uint32_t;
typedef unsigned int uint32_t;
struct h {
  signed i;
  int64_t j;
  unsigned int k;
};
uint32_t l;
static struct h fn1(uint32_t, int16_t, uint32_t, uint32_t, struct h);
unsigned int fn2(uint32_t p1) {
  struct h p;
  int32_t q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(uint32_t p1, int16_t p2, uint32_t p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}
int main() {}
