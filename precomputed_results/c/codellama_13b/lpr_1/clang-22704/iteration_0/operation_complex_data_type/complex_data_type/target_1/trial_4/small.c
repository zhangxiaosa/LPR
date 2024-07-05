
struct c {
  int d;
  int e;
};
struct c f1, f2;
int h_array1[6], h_array2[6];

int fn1() {
  if (f1.e)
    goto i1;
  fn1();
  int j1;
  return j1;
i1:
  f1.d = h_array1[5];
  fn1();
  j1 = 0xEEACFBBFL;
  return j1;
}

int fn2() {
  if (f2.e)
    goto i2;
  fn2();
  int j2;
  return j2;
i2:
  f2.d = h_array2[5];
  fn2();
  j2 = 0xEEACFBBFL;
  return j2;
}

int main1() {
  fn1();
  int j1;
  return j1;
}

int main2() {
  fn2();
  int j2;
  return j2;
}
