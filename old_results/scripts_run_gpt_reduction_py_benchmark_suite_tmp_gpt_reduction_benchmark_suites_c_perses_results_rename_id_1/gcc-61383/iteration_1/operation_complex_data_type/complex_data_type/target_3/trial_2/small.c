int fn3(int p1, int p2) {
  int result;
  
  if (p1 != 0 && p2 != 0 && p1 > 2147483647 - p2)
    result = p1;
  else if (p1 < 0 && p2 < 0 && p1 != 0)
    result = p1;
  else
    result = p1 + p2;
  
  return result;
}

int m;
unsigned n;
int o;

short fn5(int p1) {
  int ab;
  
  for (; n < 12; n = fn3(n, 3)) {
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  
  return m;
}

int main() {
  if (fn5(o))
    ;
}