
bool e_bool;
int e_int;

int fn1() {
  if (e_bool)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e_bool = true;
  e_int = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  e_bool = false;
  e_int = 0;
}
