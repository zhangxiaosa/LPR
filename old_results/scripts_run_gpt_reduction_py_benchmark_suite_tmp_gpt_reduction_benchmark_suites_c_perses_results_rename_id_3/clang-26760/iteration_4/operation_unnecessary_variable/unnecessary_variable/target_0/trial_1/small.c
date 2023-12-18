unsigned g;
int main() {
  unsigned k;
  k = 0x24F96B7B;
q:
  k = k >> 1;
  if (g) {
    k = k << 0x24F96B7B;
    goto q;
  }
}