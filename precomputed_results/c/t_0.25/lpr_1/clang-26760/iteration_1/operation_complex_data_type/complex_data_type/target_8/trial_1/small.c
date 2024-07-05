int f;
signed int g;

int main() {
  unsigned int k;
  int l = 1;
  unsigned int p = g;
  
  while (p) {
    k = k >> l;
    if (p)
      k = k << 1;
  }
}