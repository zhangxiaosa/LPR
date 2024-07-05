char fn1(char p1, char p2) { return p1 * p2; }

unsigned i;
int j_h;

int main() {
  j_h = (6 * i) && 1L;
  j_h = (5 * i) && 1L;
  j_h = (4 * i) && 1L;
  j_h = (3 * i) && 1L;
  j_h = (2 * i) && 1L;
  j_h = (1 * i) && 1L;
  j_h = (0 * i) && 1L;
  j_h = (-1 * i) && 1L;
  j_h = (-2 * i) && 1L;
  j_h = (-3 * i) && 1L;
  j_h = (-4 * i) && 1L;
  j_h = (-5 * i) && 1L;
  j_h = (-6 * i) && 1L;

  return 0;
}