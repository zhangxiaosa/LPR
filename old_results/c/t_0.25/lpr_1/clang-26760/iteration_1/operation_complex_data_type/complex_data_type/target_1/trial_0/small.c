typedef unsigned d;
d f;
int main() {
  d k;
  d p = f;
  while (p) {
    k = k >> 1;
    if (p)
      k = k << 0x24F96B7B;
  }
}