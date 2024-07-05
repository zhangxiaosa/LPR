
struct c {
  signed int d : 18;
  unsigned int e;
  signed int g;
  signed int h;
} i, j;

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  signed int p = l.d | -(165 && l.d) - n;
  i.g = p;
}
