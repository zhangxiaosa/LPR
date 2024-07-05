int f;

char fn1() {
  if (f) {
    f = 6L;
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
