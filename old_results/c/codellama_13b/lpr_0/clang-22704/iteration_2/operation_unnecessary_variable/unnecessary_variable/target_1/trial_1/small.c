
int fn1() {
  if (f_e)
    goto i;
  return 0xEEACFBBF;
i:
  f_e = 6;
  return 0xEEACFBBF;
}

int main() {}
