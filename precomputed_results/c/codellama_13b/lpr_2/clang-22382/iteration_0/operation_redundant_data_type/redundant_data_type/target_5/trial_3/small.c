
struct h {
  signed int i;
  long int j;
  unsigned int k;
};
unsigned int l;

int fn2(unsigned int p1) {
  struct h p;
  int q;
  p.k = p1;
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
