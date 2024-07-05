char h;
short o;
char p;

int main() {
  short q = o;

  // Unrolled loop iterations
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  if (p = q)
    ;

  h = p;
  printf("checksum = %X\n", h);
  return 0;
}