int d;
int e;

void fn1() {
  int h = 6L;
  while (!e) {
    d = h;
    e = 1; // Set e to a non-zero value to exit the loop
  }
}

int main() {
  e = 0; // Initialize e to zero
  fn1();
  return 0xEEACFBBFL;
}