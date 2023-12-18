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
  int temp;

  if (loopCount < 12) {
    temp = o == 0 ? o : o % o;
    if (o <= 0xE3L) {
      // Loop body iteration 1
      if (temp) break;
      loopCount = fn3(loopCount, 3);

      temp = o == 0 ? o : o % o;
      if (o <= 0xE3L) {
        // Loop body iteration 2
        if (temp) break;
        loopCount = fn3(loopCount, 3);

        temp = o == 0 ? o : o % o;
        if (o <= 0xE3L) {
          // Loop body iteration 3
          if (temp) break;
          loopCount = fn3(loopCount, 3);

          temp = o == 0 ? o : o % o;
          if (o <= 0xE3L) {
            // Loop body iteration 4
            if (temp) break;
            loopCount = fn3(loopCount, 3);
          }
        }
      }
    }
  }

  return m;
}