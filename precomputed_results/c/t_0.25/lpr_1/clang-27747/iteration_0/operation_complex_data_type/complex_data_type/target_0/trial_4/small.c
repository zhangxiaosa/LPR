typedef signed int a;
typedef int b;
struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};
struct c i;
struct c j;
b fn1() {
  struct c l = {24, 6738, 165};
  b m = j.e;
  l.d = m;
  b n = j.h && l.d;
  b o = l.d;
  a p = o | -(l.f && l.d) - n;
  i.g = p;
}
int main() {}