
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1(int h) {
  if (e)
    goto i;
  int j;
  fn1(j);
  return j;
i:
  d = h;
  int k;
  fn1(k);
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
