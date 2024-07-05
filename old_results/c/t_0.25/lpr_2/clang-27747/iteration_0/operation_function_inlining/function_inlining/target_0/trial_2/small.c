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

int main() {
  struct c l = {24, 6738, 165};
  j.e = l.d;
  b n = j.h && j.e;
  b o = j.e;
  a p = o | -(j.f && j.e) - n;
  i.g = p;
}