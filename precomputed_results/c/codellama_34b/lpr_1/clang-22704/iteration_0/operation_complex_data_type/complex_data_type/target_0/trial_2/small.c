
typedef char b;
struct c {
  int d;
  int e;
};
struct c f;

int d;
int e;

b fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
