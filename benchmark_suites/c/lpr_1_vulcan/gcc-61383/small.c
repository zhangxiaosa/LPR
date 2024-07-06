int fn3(p1, p2) {
  if (p1 && p2 && p2 > 2147483647 - p1)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}
char m;
int o;
int main() {
  for (; m < 12; m = fn3(m, 3)) {
    int temp = o == 0 ? o : m % m;
    if (o <= 0xE3L)
      ;
    else if (temp)
      break;
  }
  return o;
}
