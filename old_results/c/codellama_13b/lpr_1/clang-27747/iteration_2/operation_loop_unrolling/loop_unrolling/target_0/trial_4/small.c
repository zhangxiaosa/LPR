
struct c {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c l;
  l.h = j.h;

  int n = 0;
  int p = 0;

  for (int k = 0; k < 18; k++) {
    n = (j.h >> k) & 1;
    p = (l.h >> k) | -(165 >> k) - n;
    i.g = p;
  }
}
