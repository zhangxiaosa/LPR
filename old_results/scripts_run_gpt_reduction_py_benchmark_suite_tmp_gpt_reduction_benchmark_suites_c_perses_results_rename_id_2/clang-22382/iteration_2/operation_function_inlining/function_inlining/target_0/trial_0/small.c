typedef long long_type;
typedef unsigned unsigned_type;
struct h {
  int i;
  long_type j;
  unsigned_type k;
};
unsigned_type l;
unsigned_type fn2() {
  struct h p;
  p.k;
w:
  goto w;
}
int main() {}
