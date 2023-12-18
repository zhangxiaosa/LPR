short fn3(short p1, short p2) {
  if (p1 && p2 && p1 > 32767 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn5(short p1) {
  unsigned loopCount = n;

  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    short temp = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp)
      break;
  }

  return m;
}

int main() {
  if (fn5(o))
    ;
}