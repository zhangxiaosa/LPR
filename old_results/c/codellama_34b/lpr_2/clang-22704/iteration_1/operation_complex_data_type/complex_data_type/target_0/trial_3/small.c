
int d;
bool e;

int fn1() {
  if (e) {
    goto i;
  }
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}
