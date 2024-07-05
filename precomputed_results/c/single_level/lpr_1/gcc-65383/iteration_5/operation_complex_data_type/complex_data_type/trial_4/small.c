unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;
signed fn1() {
  for (;;) {
    int r_1[5];
    int r_2[9];
    int r_3[5];
    int* r[5];
    int** r_ptr;
    r_ptr = &r[0];
    for (int i = 0; i < 5; i++) {
      r[i] = &r_2;
    }
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 9; j++) {
        r[j] = &r_3;
      }
    }
    if (h2)
      return 0xC3L;
    g = *(*(r_ptr + i) + i) + i;
  }
}

signed main() {
  fn1();
}