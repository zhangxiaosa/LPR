
int g(int p1, int p2) {
  return p2;
}

int n = 1957;
int o = 5;
int p1 = 5;
int p2 = 5;
int t = 0;

int main() {
  n = g(p1, p2);
  o = n;
  p1 = 5;
  p2 = 5;
  t = t % (17 / o);
  o;
}
