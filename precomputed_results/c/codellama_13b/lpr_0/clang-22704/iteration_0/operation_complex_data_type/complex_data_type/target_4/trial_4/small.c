
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  int h = 6L;
  if (e) {
    goto i;
  }
  int j;
  j = fn1();
  return j;
i:
  d = h;
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  return 0;
}
