
int e;

int fn1() {
  if (e) {
    e = 0;
    return 0xEEACFBBF;
  }
  return 0xEEACFBBF;
}

int main() {
  e = 0;
  while (e == 0) {
    fn1();
  }
  return 0xEEACFBBF;
}
