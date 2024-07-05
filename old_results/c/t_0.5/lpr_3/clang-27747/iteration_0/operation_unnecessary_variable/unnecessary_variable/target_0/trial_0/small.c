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
  m = 24; // Replace l.d with its constant value
  b n = j.h && m; // Replace l.d with its constant value
  b o = m; // Replace l.d with its constant value
  signed p = o | -(j.f && m) - n; // Replace l.d with its constant value
  i.g = p;
}