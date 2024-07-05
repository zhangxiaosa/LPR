
struct c {
  int h : 18;
  int g;
  int f;
} i, j;
int main() {
  struct c l;
  l.h = j.h;
  int p = l.h | -(165 && l.h);
  i.g = p;
}
