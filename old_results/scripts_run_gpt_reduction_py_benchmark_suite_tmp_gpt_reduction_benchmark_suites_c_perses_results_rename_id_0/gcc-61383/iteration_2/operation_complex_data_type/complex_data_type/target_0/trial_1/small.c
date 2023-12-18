int fn3(int fn3_p1, int p2) {
  int res;
  int temp1;
  int temp2;

  temp1 = fn3_p1 > 2147483647 - p2;
  temp2 = fn3_p1 < 0 && p2 < 0;

  if (temp1 && p2 && temp2) {
    res = fn3_p1;
  } else {
    res = fn3_p1 + p2;
  }

  return res;
}

unsigned n;
int o;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp;
    int innerTemp;

    innerTemp = o % o;

    if (0x4F92L < (temp = o == 0 ? o : innerTemp, 6)) {
    } else if (o <= 0xE3L) {
    } else if (temp) {
      break;
    }
  }

  return 0;
}
