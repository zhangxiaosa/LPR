
struct c {
  unsigned int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
} i, j;

int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  unsigned int n = j.h && l.d;
  unsigned int o = l.d;
  unsigned int p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() { i.g = j.h && j.e; }
