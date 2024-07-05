int fn1(unsigned p1, int p2) { return p2; }

int r;
static char s = -5L;

int ae;
int p2_n; // Decomposed member
int p2_o; // Decomposed member

int main() {
  p2_n = 1957; // Initialize p2_n member
  p2_o = fn1(5, 5); // Assign p2_o member value using fn1

  ae = p2_o;

  p2_o = 0;

  r = r % (~s / ae);

  p2_o; // This line doesn't do anything specific, might be removed
}