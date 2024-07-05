
struct {
  signed int h;
} g;
unsigned int i;
struct {
  signed int h;
} j;
unsigned int* fn2(unsigned int p1, unsigned int* p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}
unsigned int main() { return 0; }
