int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
signed o;
int main() {
  int ab;

  // First iteration
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;

  // Second iteration
  if (0x4F92L < (ab = fn3(n, 3) == 0 ? fn3(n, 3) : fn3(n, 3) % fn3(n, 3), 6))
    ;
  else if (fn3(n, 3) <= 0xE3L)
    ;
  else if (ab)
    break;

  // Third iteration
  if (0x4F92L < (ab = fn3(fn3(n, 3), 3) == 0 ? fn3(fn3(n, 3), 3) : fn3(fn3(n, 3), 3) % fn3(fn3(n, 3), 3), 6))
    ;
  else if (fn3(fn3(n, 3), 3) <= 0xE3L)
    ;
  else if (ab)
    break;

  // Fourth iteration
  if (0x4F92L < (ab = fn3(fn3(fn3(n, 3), 3), 3) == 0 ? fn3(fn3(fn3(n, 3), 3), 3) : fn3(fn3(fn3(n, 3), 3), 3) % fn3(fn3(fn3(n, 3), 3), 3), 6))
    ;
  else if (fn3(fn3(fn3(n, 3), 3), 3) <= 0xE3L)
    ;
  else if (ab)
    break;

  return m;
}