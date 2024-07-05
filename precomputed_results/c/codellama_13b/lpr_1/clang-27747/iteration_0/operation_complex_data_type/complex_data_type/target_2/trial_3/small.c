
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;

int fn1() {
  j.e = 24;
  int n = j.h && j.e;
  int o = j.e;
  signed p = o | -(j.f && j.e) - n;
  i.g = p;
}

int main() { i.g = j.h && j.e; }
