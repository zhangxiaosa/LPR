short fn3(short p1, short p2) {
  return p1 && p2 && p1 > 32767 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned short n;
int o;
short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    short temp1 = o == 0 ? 0 : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp1)
      break;
  }
}

int main() { fn6(); }