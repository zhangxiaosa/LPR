
int f_e;

int fn1() {
  if (f_e) {
    f_e = 6;
    return 0xEEACFBBF;
  } else {
    fn1();
    return 0xEEACFBBF;
  }
}

int main() {}
