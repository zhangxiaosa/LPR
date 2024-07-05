int f;

int fn1() {
  if (f)
    goto i;
  
  int j;
  return j;

i:
  f = 6;
  return 0xEEACFBBF;
}

int main() {}