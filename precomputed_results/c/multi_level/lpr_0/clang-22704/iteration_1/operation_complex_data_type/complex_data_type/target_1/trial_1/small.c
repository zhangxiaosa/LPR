int f_d;
int f_e = 0;

int fn1() {
  f_d = 6L;

  while (f_e == 0) {
    fn1();
  }
}

int main() {}
