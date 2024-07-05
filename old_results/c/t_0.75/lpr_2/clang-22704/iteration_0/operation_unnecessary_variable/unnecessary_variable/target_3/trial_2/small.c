int f_d;
int f_e;
char fn1() {
  if (f_e)
    goto i;
  char j;
  return 0xEEACFBBF;
i:
  f_d = 6L;
  return 0xEEACFBBF;
}
int main() {}.