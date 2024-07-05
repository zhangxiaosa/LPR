int f_d;
int f_e;

int main() {
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