
int main() {
  s_short p1 = {1, 2};
  s_short p2 = {3, 4};
  s_short p3 = fn1(p1, p2);
  s_short p4 = fn2(p1, p2);
  s_short p5 = fn3(p1, p2);
  s_short p6 = fn5(p1, p2);
  s_short p7 = fn6(p1, p2);
  s_short p8 = fn9(p1, p2);
  s_short p9 = fn10(p1, p2);
  s_short p10 = fn11(p1, p2);
  s_short p11 = fn12_inlined(p1, p2);
  return 0;
}
