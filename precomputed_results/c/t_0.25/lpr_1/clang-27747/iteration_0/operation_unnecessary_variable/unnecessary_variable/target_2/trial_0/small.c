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
  j.d = m;
  b n = j.h && j.d;
  b o = j.d;
  a p = o | -(j.f && j.d) - n;
  i.g = p;
}
int main() {}
