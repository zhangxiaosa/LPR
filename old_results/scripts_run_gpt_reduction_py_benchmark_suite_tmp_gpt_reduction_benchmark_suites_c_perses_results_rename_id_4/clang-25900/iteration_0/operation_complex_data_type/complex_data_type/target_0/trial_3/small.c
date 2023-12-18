int fn1(unsigned p1, int p2) {
  return p2;
}

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int n;  // Decomposed variable for m.n
int o;  // Decomposed variable for m.o

int fn4() {
  n = 0;  // Initialize n (optional, depends on the desired initial value)

  o = 0;  // Initialize o (optional, depends on the desired initial value)

  int ae;
  int af = t;
  ae = o;
  o = u;
  r = af % (~s / ae);
  o;  // Accessing o alone (not used later, can be removed if unnecessary)
}

int main() {
  fn4();
}