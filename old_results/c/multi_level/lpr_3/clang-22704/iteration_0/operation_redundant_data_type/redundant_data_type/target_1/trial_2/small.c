struct c {
  int d;
  int e;
};
struct c f;
char fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  char j;
  return (char)j;

i:
  f.d = h;
  fn1();
  j = (char)0xEEACFBBF;
  return (char)j;
}

int main() {}
