int main() {
  int f_d;
  int f_e;
  
  if (f_e)
    goto i;
  if (f_e)
    goto i;
  return 0xEEACFBBFL;
  
i:
  f_d = 6L;
  if (f_e)
    goto i;
  return 0xEEACFBBFL;
}