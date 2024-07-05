
int e;

int fn1() {
  if (e) {
    e = 5;
    return 0xEEACFBBF;
  }
  return 0xEEACFBBF;
}

int main() {
  return fn1();
}
