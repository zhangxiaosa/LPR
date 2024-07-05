
struct c {
  signed d : 18;
  unsigned e;
  int g;
  int h;
} i, j;

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  int p = l.d | -(165 && l.d) - n;
  i.g = p;
}
