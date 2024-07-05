
int e;

int fn1() {
  if (e)
    goto i;
  return 0xEEACFBBF;
i:
  e = 5;
  return 0xEEACFBBF;
}

int main() {}
