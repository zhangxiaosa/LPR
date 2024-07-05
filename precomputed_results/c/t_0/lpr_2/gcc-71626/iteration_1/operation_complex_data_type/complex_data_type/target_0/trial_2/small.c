typedef long a;
void fn1() {}
typedef long d;
d fn2() {
  d f = (d)&fn1;
  return f;
}
int main() {}