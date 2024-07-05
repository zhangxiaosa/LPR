
int e;

int fn1() {
  if (e) {
    e = 5;
    fn1();
  }
  return 0xEEACFBBF;
}

int main() {}
