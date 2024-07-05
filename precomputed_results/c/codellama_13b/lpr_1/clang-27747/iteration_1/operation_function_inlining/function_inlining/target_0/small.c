
struct c {
  signed d : 18;
  unsigned e;
  signed g;
  signed h;
} i, j;

int fn1() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(165 && l.d) - n;
  i.g = p;
}

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(165 && l.d) - n;
  i.g = p;
}
