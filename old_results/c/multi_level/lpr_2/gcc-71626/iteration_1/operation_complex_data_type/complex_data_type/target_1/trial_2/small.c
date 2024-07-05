void fn1() {}

long d_element_0;
long d_element_1;

long fn2() {
  long c = fn1;
  long f_element_0 = c;
  long f_element_1 = 0; // default initializer for unused elements
  return {f_element_0, f_element_1};
}

int main() {}
