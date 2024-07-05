
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;

int fn1() {
  int d = 24;
  int e = 6738;
  int f = 165;
  int g = 0;
  int h = 0;
  int n = 0;
  int o = 0;
  int p = 0;

  d = j.e;
  n = j.h && d;
  o = d;
  p = o | -(f && d) - n;
  g = p;
}

int main() {
  i.g = j.h && j.e;
}
