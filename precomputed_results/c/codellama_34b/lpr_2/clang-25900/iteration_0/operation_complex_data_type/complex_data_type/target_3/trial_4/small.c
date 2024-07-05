
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  return 1;
}

int main() { fn4_inlined(5); }
