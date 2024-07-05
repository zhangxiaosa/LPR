unsigned int h;
short o;
short q;
int s;

int main() {
  short r = o;
  q = r;
  s = 1L;

  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;

  h = q;
  printf("checksum = %X\n", h);

  return 0;
}