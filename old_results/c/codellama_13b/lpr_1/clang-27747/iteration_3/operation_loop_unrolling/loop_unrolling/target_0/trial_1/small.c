
struct c_new {
  int h : 18;
} i, j;
int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.h = p;
  for (int k = 0; k < 1000000; k++) {
    l.h = j.h;
    n = j.h && l.h;
    p = l.h | -(165 && l.h) - n;
    i.h = p;
  }
}
