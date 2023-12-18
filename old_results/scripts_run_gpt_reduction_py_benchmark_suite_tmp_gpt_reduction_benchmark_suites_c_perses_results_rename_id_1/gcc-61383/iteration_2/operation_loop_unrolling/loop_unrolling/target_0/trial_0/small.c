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

  // Unrolled loop iteration 1
  int temp1 = p1 == 0 ? p1 : p1 % p1;
  if (p1 <= 0xE3L)
    ;
  else if (temp1)
    break;

  // Unrolled loop iteration 2
  int temp2 = fn3(loopCount, 3);
  int temp3 = temp2 == 0 ? temp2 : temp2 % temp2;
  if (temp2 <= 0xE3L)
    ;
  else if (temp3)
    break;

  // Unrolled loop iteration 3
  int temp4 = fn3(temp2, 3);
  int temp5 = temp4 == 0 ? temp4 : temp4 % temp4;
  if (temp4 <= 0xE3L)
    ;
  else if (temp5)
    break;

  // Unrolled loop iteration 4
  int temp6 = fn3(temp4, 3);
  int temp7 = temp6 == 0 ? temp6 : temp6 % temp6;
  if (temp6 <= 0xE3L)
    ;
  else if (temp7)
    break;

  return m;
}

int main() {
  if (fn5(o))
    ;
}