int d;
int e;

char fn1() {
  int h = 6L;

loop_start:
  if (e) {
    d = h;
    fn1();
  }
  else {
    d = h;
    goto loop_end;
  }

loop_end:
  return 0xEEACFBBFL;
}

int main() {}