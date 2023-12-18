int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn5(p1) {
  unsigned loopCount = n;
  
  int temp1 = p1 == 0 ? p1 : p1 % p1;
  if (p1 <= 0xE3L) {
    // Unrolled iteration 1
    loopCount = fn3(loopCount, 3);
    int temp2 = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L) {
      // Unrolled iteration 2
      loopCount = fn3(loopCount, 3);
      int temp3 = p1 == 0 ? p1 : p1 % p1;
      if (p1 <= 0xE3L)
        return m;
      else if (temp3)
        break;
    } else if (temp2)
      break;
  } else if (temp1)
    break;

  // Original loop iteration (unrolled iteration 3)
  loopCount = fn3(loopCount, 3);
  int temp = p1 == 0 ? p1 : p1 % p1;
  if (p1 <= 0xE3L)
    ;
  else if (temp)
    break;
  
  return m;
}

int main() {
  if (fn5(o))
    ;
}