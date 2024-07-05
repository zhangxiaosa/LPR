int g;

int main() {
  unsigned k = 0; // Initialize k to 0
q:
  k = k >> 1;
  if (g) {
    k = k << 0; // Since j is unused, replace j with 0
    goto q;
  }
}