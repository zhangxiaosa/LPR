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
  l.d = j.e;
  b n = (j.h != 0) && (l.d != 0);
  signed p = j.e | -(l.f && l.d) - n;
  i.g = p;
}