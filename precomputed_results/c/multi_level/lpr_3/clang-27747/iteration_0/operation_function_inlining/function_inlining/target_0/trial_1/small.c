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
  struct c l = {24, j.e, 165};
  b m = j.e;
  j.d = m;
  b n = j.h && j.d;
  b o = j.d;
  a p = o | -(j.f && j.d) - n;
  i.g = p;
}