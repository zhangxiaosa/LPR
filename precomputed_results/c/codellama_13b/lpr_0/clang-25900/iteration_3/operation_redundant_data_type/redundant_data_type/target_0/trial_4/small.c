
int fn1(int p2) {
  return p2;
}

struct m {
  int n;
  int o;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o;
}
