c
typedef long* d;

void fn1() {}

d fn2() {
  d f = (d)malloc(sizeof(long));
  *f = (long)fn1;
  return f;
}

int main() {}
