struct c {
  int d;
  int e;
};

struct c f = {0, 0};

char fn1() {
  if (0)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
