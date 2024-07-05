int g = 0;
int h = 0x92A1D2CDL;
static int static_i = 0x06D7L;

void fn2() {
  int r[5][9][5];

  for (;;) {
    if (h)
      return;

    g = r[static_i][static_i][static_i];
  }
}

int main() {
  fn2();
  return 0;
}