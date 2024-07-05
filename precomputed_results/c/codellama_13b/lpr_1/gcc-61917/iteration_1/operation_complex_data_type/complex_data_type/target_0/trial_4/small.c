
void fn1(short p1, short p2) {
  return p1 - p2;
}

short k;
short l;
short m[5][8];

int fn3(short p1) {
  short k = 0;
  short l = 0;
  short m[5][8] = {0};
  int result = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      k = fn1(k, 6);
      p1 = k - p1;
      result += p1;
    }
  }
  return result;
}

int main() {}
