typedef long a;
void fn1() {}
typedef long d;
d fn2() {
  long c = (long)fn1;
  long f = (long){c};
  return (d)f;
}
int main() {}