unsigned fn2() {
  struct original_data_type p;
  fn1(0, p);

  struct original_data_type r1;
  p = r1 = p;

  struct original_data_type r2;
  p = r2 = p;

  struct original_data_type r3;
  p = r3 = p;

  struct original_data_type r4;
  p = r4 = p;

  struct original_data_type r5;
  p = r5 = p;
}