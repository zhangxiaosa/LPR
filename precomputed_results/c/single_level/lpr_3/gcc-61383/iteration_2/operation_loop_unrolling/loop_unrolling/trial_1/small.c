int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
signed o;
int main() {
  int p1;
  int p2;
  int result;
  signed ac = 0xE3;

  // Unrolled loop
  p1 = o;
  p2 = o;
  result = p2 == 0 ? p1 : p1 % p2;
  if (!(o <= ac) && result)
    goto exit;
  
  p1 = fn3(p2, 3);
  p2 = p1;
  result = p2 == 0 ? p1 : p1 % p2;
  if (!(p2 <= ac) && result)
    goto exit;
  
  p1 = fn3(p2, 3);
  p2 = p1;
  result = p2 == 0 ? p1 : p1 % p2;
  if (!(p2 <= ac) && result)
    goto exit;

  // Repeat the above block 9 more times

  p1 = fn3(p2, 3);
  p2 = p1;
  result = p2 == 0 ? p1 : p1 % p2;
  if (!(p2 <= ac) && result)
    goto exit;

  p1 = fn3(p2, 3);
  p2 = p1;
  result = p2 == 0 ? p1 : p1 % p2;
  if (!(p2 <= ac) && result)
    goto exit;

  exit:
  return m;
}