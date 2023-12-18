int fn3(int fn3_p1, int p2) {
  int condition1 = (fn3_p1 && p2 && fn3_p1 > 2147483647 - p2);
  int condition2 = (fn3_p1 < 0 && p2 < 0 && fn3_p1);

  if (condition1 || condition2) {
    return fn3_p1;
  } else {
    return fn3_p1 + p2;
  }
}

unsigned n = 0;
int o = 0;

int main() {
  while (n < 12) {
    n = fn3(n, 3);
    int temp;
    int tempAssign = (o == 0) ? o : o % o;
    int condition3 = (0x4F92L < (temp = tempAssign, 6));
    int condition4 = (o <= 0xE3L);

    if (condition3) {
      // code block executed when condition3 is true
    } else if (condition4) {
      // code block executed when condition4 is true
    } else if (temp) {
      break;
    }
  }

  return 0;
}