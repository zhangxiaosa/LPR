char fn1() {
  if (f.e) {
    f.d = 6L;
    fn1();
  }
}

int main() {
  if (f.e) {
    f.d = 6L;
    fn1();
  }
}