
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;
int fn1() {
  j.e = 24;
  j.f = 6738;
  j.h = 165;
  int n = j.h && j.e;
  i.g = j.e | -(j.f && j.e) - n;
}
int main() {}
