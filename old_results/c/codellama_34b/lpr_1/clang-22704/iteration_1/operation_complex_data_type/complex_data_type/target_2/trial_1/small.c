
<SYS>

int d;
int e;
int fn1(int* h) {
  int result = 0xEEACFBBFL;
  if (*h == 0) {
    result = 0;
  } else {
    d = *h;
  }
  fn1(h);
  return result;
}

int main() {
  int h = 0;
  int result = fn1(&h);
  return result;
}

