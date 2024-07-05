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
  int m = j.e;
  i.d = m;
  int n = j.h && i.d;
  int o = i.d;
  signed p = o | -(i.f && i.d) - n;
  i.g = p;
}