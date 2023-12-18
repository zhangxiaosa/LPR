unsigned fn1(unsigned p1, int p2) {
  return p2;
}

unsigned n;
unsigned o;
int r;
static signed s = -5L;
unsigned t;
unsigned v;

int main() {
  n = 1957; // Set the value of member 'n'

  // Call fn1 and assign the result to 'o'
  o = fn1(v, 5);

  int ae = o; // Assign the value of 'o' to a local variable 'ae'

  o = 0; // Set the value of member 'o'

  r = t % (~s / ae); // Calculate and assign the result to 'r'

  o; // Reference member 'o'

  return 0;
}