
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;

int fn1() {
  int d = j.e;
  int f = j.f;
  int g = j.g;
  int h = j.h;
  int l = {d, f, g, h};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {
  int e = j.e;
  int g = j.g;
  int h = j.h;
  int l = {e, f, g, h};
  i.g = l.g && l.e;
}
