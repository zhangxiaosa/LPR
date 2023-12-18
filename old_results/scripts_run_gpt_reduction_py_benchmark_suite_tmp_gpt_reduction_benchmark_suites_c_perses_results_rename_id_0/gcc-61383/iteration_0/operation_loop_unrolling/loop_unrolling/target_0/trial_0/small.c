typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }
c fn3(c p1, c p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }

f m;
d n;
a o;

e fn6() {
  for (; n < 12 - 3; n = fn3(fn3(fn3(n, 3), 3), 3)) {
    e temp;
    if (0x4F92L < (temp = fn1(o, o), 6)) {
    } else {
      a temp2 = 0xE3L;
      if (o <= temp2) {
      } else if (temp)
        break;
    }

    e temp_1;
    if (0x4F92L < (temp_1 = fn1(o, o), 6)) {
    } else {
      a temp2_1 = 0xE3L;
      if (o <= temp2_1) {
      } else if (temp_1)
        break;
    }

    e temp_2;
    if (0x4F92L < (temp_2 = fn1(o, o), 6)) {
    } else {
      a temp2_2 = 0xE3L;
      if (o <= temp2_2) {
      } else if (temp_2)
        break;
    }

    e temp_3;
    if (0x4F92L < (temp_3 = fn1(o, o), 6)) {
    } else {
      a temp2_3 = 0xE3L;
      if (o <= temp2_3) {
      } else if (temp_3)
        break;
    }
  }

  return m;
}

int main() {
  fn6();
}