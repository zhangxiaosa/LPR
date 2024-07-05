int main() {
  unsigned int k = 0;  // Initialize k to 0

q:
  k = k >> 1;

  if (k) {
    goto q;
  }
}