int main() {
  if (fn5(o))
    ;
}

int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;unsigned n;
int o;

short fn5(p1) {
  unsigned loopCount = n;
  for (; loopCount < 12; loopCount += 3) {
    // Unrolled loop body (iteration 1)
    int temp1 = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp1)
      break;

    int fn3_result1 = fn3(loopCount+1, 3);

    // Unrolled loop body (iteration 2)
    int temp2 = fn3_result1 == 0 ? fn3_result1 : fn3_result1 % fn3_result1;
    if (fn3_result1 <= 0xE3L)
      ;
    else if (temp2)
      break;

    int fn3_result2 = fn3(loopCount+2, 3);

    // Unrolled loop body (iteration 3)
    int temp3 = fn3_result2 == 0 ? fn3_result2 : fn3_result2 % fn3_result2;
    if (fn3_result2 <= 0xE3L)
      ;
    else if (temp3)
      break;
  }
  return m;
}