char fn1() {
  if (f_d)
    goto i;
  f_d = 6L;
  goto i;
i:
  f_d = 6L;
  goto i;
}

int main() {}