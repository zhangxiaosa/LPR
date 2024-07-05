typedef signed a;
typedef int b;
struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};
struct c i;
struct c j;
b fn1() {
  b m = j.e;
  b n = j.h && m;
  b o = m;
  a p = o | -(l.f && m) - n;
  i.g = p;
}
int main() {}
