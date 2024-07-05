
struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;

  /* Decomposition of i */
  int d = i.d;
  int e = i.e;
  int h = i.h;

  /* Decomposition of j */
  int jd = j.d;
  int je = j.e;
  int jh = j.h;

  /* Decomposition of l */
  int ld = l.d;
  int le = l.e;
  int lh = l.h;

  /* Optimization of struct c i */
  i.d = ld | -(lh && ld) - n;
  i.e = je;
  i.h = lh;

  return 0;
}
