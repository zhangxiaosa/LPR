
// Decomposition of d
struct d {
  long x;
  long y;
};

// Function to initialize d
d fn2() {
  long x = fn1();
  long y = x;
  return (struct d) {x, y};
}

// Function to access x and y
long fn3(d d) {
  return d.x;
}

long fn4(d d) {
  return d.y;
}

// Main function
int main() {
  d d = fn2();
  long x = fn3(d);
  long y = fn4(d);
  return 0;
}
