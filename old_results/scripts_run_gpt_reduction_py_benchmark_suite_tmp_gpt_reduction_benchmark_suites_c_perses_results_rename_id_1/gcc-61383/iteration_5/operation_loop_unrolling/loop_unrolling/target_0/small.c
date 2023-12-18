int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
int o;
int main() {
  unsigned loopCount = m;
  for (; loopCount < 12;) {
    loopCount = fn3(loopCount, 3);

    int temp1 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp1)
      break;

    loopCount = fn3(loopCount, 3);

    int temp2 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp2)
      break;

    loopCount = fn3(loopCount, 3);

    int temp3 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp3)
      break;

    loopCount = fn3(loopCount, 3);

    int temp4 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp4)
      break;
  }

  return m;
}