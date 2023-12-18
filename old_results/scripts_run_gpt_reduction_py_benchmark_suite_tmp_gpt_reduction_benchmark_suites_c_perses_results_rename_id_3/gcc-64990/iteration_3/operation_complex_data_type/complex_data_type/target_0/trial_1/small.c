int g = 0x7EBA;
int h = 0xCA;
int i;
int j_old_0_0, j_old_0_1, j_old_0_2, j_old_0_3, j_old_0_4;
int j_old_1_0, j_old_1_1, j_old_1_2, j_old_1_3, j_old_1_4;
int j_old_2_0, j_old_2_1, j_old_2_2, j_old_2_3, j_old_2_4;
int j_old_3_0, j_old_3_1, j_old_3_2, j_old_3_3, j_old_3_4;
int j_old_4_0, j_old_4_1, j_old_4_2, j_old_4_3, j_old_4_4;

int fn1(p1) {
  if (p1) {
    // Note: Assignment to m[1][0][1] is removed
  }
  return 2;
}

int fn2(p1) {
  int v_0_0_0, v_0_0_1, v_0_1_0, v_0_1_1, v_0_2_0, v_0_2_1;
  int v_1_0_0, v_1_0_1, v_1_1_0, v_1_1_1, v_1_2_0, v_1_2_1;
  int v_2_0_0, v_2_0_1, v_2_1_0, v_2_1_1, v_2_2_0, v_2_2_1;
  int v_3_0_0, v_3_0_1, v_3_1_0, v_3_1_1, v_3_2_0, v_3_2_1;
  int v_4_0_0, v_4_0_1, v_4_1_0, v_4_1_1, v_4_2_0, v_4_2_1;

  if (i == 1)
    return v_0_0_0;

  if (h) {
  }
  else
    return j_old_0_0;

  return 0x709BFC8A;
}

int fn3() {
  fn1(fn2(0));
  return 0;
}

int main() {
  fn3();
  return 0;
}