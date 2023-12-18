#include <iostream>

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

  // Unrolled loop body - iteration 1
  int temp1 = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp1)
    return m;

  // Unrolled loop body - iteration 2
  int temp2 = fn3(loopCount, 3);
  int temp3 = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp3)
    return m;
  
  // Unrolled loop body - iteration 3
  int temp4 = fn3(temp2, 3);
  int temp5 = o == 0 ? o : o % o;
  if (o <= 0xE3L)
    ;
  else if (temp5)
    return m;

  return m;
}