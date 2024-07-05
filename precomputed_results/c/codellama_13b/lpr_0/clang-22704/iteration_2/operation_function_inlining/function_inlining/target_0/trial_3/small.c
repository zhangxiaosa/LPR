
int f_e;

int fn1() {
  if (f_e)
    return 0xEEACFBBF;
  f_e = 6;
  return 0xEEACFBBF;
}

int main() {}
