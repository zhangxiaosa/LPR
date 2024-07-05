
<SYS>

Given the following program and the specified function, optimize it out via function inlining.. The program is unsigned g(unsigned p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static int s = -5L;
unsigned t;
unsigned v;
int main() {
  struct m ad = {1957};
  ad.o = g(v, 5);
  int ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
}

/*
The target to be optimized is `g`: This function takes two unsigned integers as input and returns an unsigned integer.
*/

// Function inlining optimization
unsigned g(unsigned p1, int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = p2;
  int ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
}

