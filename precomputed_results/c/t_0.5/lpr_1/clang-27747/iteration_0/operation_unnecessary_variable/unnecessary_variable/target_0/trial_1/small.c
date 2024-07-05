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
  b m = j.e;
  i.d = j.e;
  b n = j.h && i.d;
  b o = i.d;
  signed p = o | -(i.f && i.d) - n;
  i.g = p;
}