
int f_d;
int f_e;

int fn1_body() {
  if (1) {
    f_d = 6;
    while (1) {
      fn1_body();
    }
  }
  return 0xEEACFBBF;
}

int main() {}
