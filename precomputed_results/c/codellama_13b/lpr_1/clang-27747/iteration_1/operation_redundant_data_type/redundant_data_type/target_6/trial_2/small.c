
struct c {
  signed int h : 18;
  unsigned int e;
  int g;
  int f;
} i, j;

int main() {
  struct c l;
  l.h = j.e;
  int n = j.f && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.g = p;
}
