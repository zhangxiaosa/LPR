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

  // Loop iteration 1
  {
    int temp = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp)
      break;
  }

  // Loop iteration 2
  {
    int temp = fn3(m, 3) == 0 ? o : fn3(m, 3) % o;
    if (fn3(m, 3) <= 0xE3L)
      ;
    else if (temp)
      break;
  }

  // Loop iteration 3
  {
    int temp = fn3(fn3(m, 3), 3) == 0 ? o : fn3(fn3(m, 3), 3) % o;
    if (fn3(fn3(m, 3), 3) <= 0xE3L)
      ;
    else if (temp)
      break;
  }

  // Repeat the above iterations until iteration 12...

  return m;
}