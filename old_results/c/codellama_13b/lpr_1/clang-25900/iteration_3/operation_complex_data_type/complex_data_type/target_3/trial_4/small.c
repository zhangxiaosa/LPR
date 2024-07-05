
int fn1(int p1, int p2) { return p2; }

int r;
int fn3() {
  r = t % (~s / fn1(5, 5));
}

int main() { fn3(); }
