
struct c {
  int e;
};

int main() {
  struct c f;
  int j;
  if (f.e) {
    j = 0xEEACFBBF;
  } else {
    j = fn1();
  }
  return j;
}

int fn1() {
  return 0;
}
