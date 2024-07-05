typedef char b;
int d;
int e;

b fn1() {
  while (!e) {
    d = 6L;
    e = 1;
  }

  b j = 0xEEACFBBFL;
  return j;
}

int main() {
  e = 0;
  b result = fn1();
  return 0;
}