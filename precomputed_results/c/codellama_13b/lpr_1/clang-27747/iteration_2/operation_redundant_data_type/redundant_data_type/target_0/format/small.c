
struct c {
  int h : 18;
  int g;
} i, j;
int main() {
  struct c l;
  l.h = j.h;
  int n = j.h && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.g = p;
}
