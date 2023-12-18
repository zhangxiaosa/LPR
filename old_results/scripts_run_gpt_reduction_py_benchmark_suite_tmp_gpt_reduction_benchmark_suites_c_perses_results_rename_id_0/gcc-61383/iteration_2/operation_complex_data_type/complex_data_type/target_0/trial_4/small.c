int fn3(int fn3_p1, int p2) {
  int fn3_result = 0;
  if (fn3_p1 && p2 && fn3_p1 > 2147483647 - p2 || fn3_p1 < 0 && p2 < 0 && fn3_p1) {
    fn3_result = fn3_p1;
  } else {
    fn3_result = fn3_p1 + p2;
  }
  return fn3_result;
}

unsigned n = 0;
int o = 0;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp = 0;
    if (0x4F92L < (temp = (o == 0 ? o : o % o), 6)) {
    } else if (o <= 0xE3L) {
    } else if (temp) {
      break;
    }
  }
  return 0;
}