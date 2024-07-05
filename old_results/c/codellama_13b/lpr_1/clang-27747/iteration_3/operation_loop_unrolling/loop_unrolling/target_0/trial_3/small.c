
struct c_new {
  int h : 18;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.h = p;

  // loop unrolled by 32 iterations
  int k = 0;
  for (int i = 0; i < 32; i++) {
    k = k + 1;
    n = j.h && l.h;
    p = l.h | -(165 && l.h) - n;
    i.h = p;
  }
}
