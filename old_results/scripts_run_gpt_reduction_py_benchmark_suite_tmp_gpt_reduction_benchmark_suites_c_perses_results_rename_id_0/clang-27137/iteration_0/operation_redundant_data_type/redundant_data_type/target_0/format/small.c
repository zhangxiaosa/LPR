typedef short b;
typedef int c;
b o;
char p;
int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  
  if (p = q)
    ;
  
  printf("checksum = %X\n", p);
  return 0;
}