
int fn3(p1_int) {
  int o;
  for (int i = 0; i < 5; i++)
    p1_int = fn2(o, p1_int);
  return p1_int;
}
