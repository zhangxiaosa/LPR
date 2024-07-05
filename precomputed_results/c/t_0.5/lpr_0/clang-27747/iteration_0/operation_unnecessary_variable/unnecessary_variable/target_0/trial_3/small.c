struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};
struct c i;
int main() {
  struct c l = {24, 6738, 165};
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
}