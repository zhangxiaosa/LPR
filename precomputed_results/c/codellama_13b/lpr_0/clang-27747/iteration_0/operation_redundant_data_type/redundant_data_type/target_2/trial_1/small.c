
typedef struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
} c;

c i;
c j;

int fn1() {
  c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  signed int g = o | -(l.f && l.d) - n;
  i.g = g;
}

int main() {}
