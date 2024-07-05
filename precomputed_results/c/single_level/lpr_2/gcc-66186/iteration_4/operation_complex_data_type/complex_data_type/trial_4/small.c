int h;
short ak0, ak1, ak2, ak3, ak4, ak5, ak6, ak7;
unsigned p2;
unsigned short p3 = -7L;
unsigned p4;

int fn5() {
  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  return 1L;
}

int main() {
  fn5();
}