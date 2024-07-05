
typedef signed a;
typedef int b;
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;
b fn1() {
  b m = j.e;
  b n = j.h && m;
  b o = m;
  a p = o | -(j.f && m) - n;
  i.g = p;
}
int main() {}
