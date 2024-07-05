
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;

int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {
  struct c k = {24, 6738, 165};
  k.d = j.e;
  int n = j.h && k.d;
  int o = k.d;
  signed p = o | -(k.f && k.d) - n;
  i.g = p;
}
