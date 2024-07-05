struct c {
  int d;
  int e;
};

struct c f;
int h;
char j;

char fn1() {
  h = 6L;
  if (f.e)
    goto i;
  fn1();
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}