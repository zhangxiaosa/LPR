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
  struct c l = {24, 6738, 165};
  l.d = j.e;
  b n = j.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
}

int main() {}
