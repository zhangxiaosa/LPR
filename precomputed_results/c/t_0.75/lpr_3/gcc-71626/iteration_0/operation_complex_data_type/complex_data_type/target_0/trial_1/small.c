typedef long d_element;
#define VECTOR_SIZE 2

d_element fn2() {
  long c = fn1();
  d_element f[VECTOR_SIZE];
  f[0] = c;
  f[1] = 0;
  return f;
}

int main() {
  // Add necessary code here if needed
  return 0;
}