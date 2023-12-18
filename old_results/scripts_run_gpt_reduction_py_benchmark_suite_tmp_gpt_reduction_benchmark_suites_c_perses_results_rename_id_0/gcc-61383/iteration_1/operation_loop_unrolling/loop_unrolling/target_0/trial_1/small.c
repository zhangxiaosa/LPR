int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) {
    return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
         : p1 + p2;
}

unsigned n;
int o;

short fn6() {
  short temp;

  if (n < 12) {
    if (0x4F92L < (temp = fn1(o, o), 6)) {
    } else if (o <= 0xE3L) {
    } else if (temp)
      return 0;

    if (n + 3 < 12) {
      if (0x4F92L < (temp = fn1(o, o), 6)) {
      } else if (o <= 0xE3L) {
      } else if (temp)
        return 0;

      if (n + 6 < 12) {
        if (0x4F92L < (temp = fn1(o, o), 6)) {
        } else if (o <= 0xE3L) {
        } else if (temp)
          return 0;

        if (n + 9 < 12) {
          if (0x4F92L < (temp = fn1(o, o), 6)) {
          } else if (o <= 0xE3L) {
          } else if (temp)
            return 0;
        }
      }
    }
  }

  return 0;
}

int main() { 
  fn6(); 
}
