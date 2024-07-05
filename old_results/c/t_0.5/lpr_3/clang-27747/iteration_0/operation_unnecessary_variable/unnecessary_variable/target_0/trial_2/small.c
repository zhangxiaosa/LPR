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
b main() {
  b m = j.e;
  b n = j.h && m;
  b o = m;
  signed p = o | -(j.h && m) - n;
  i.g = p;
}