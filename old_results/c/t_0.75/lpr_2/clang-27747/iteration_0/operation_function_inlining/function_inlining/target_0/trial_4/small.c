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
  struct c j = {24, 6738, 165};
  j.d = j.e;
  b n = j.h && j.d;
  b o = j.d;
  a p = j.e | -(j.f && j.e) - n;
  i.g = p;
}