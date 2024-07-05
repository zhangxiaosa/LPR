
struct c {
  int e;
};

int e;

int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
}

i:
  e = 5;
  fn1();
  return 0xEEACFBBF;

int main() {
  c c1;
  int e = c1.e;
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
}
