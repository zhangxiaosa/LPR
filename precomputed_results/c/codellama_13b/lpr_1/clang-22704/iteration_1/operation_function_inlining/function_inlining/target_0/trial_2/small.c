
struct c {
  int e;
};
struct c f;
int fn1() {
  if (f.e)
    goto i;
  return 0xEEACFBBF;
i:
  f.e = 5;
  return 0xEEACFBBF;
}
int main() {}
