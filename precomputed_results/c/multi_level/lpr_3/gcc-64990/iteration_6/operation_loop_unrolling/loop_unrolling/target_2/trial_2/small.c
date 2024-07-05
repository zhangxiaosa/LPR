static int g = 0x7EBA;
int h = 0xCA;
int i;
int j_old[5][5];

int fn2(p1) {
  int v_1[6][3][2];
  int result;

  if (i == 1) {
    result = v_1[g][0][0];
  } else {
    if (h) {
      result = 0;
    } else {
      result = j_old[g][g];
    }
  }

  return result;
}

int main() {
  int fn2_result = fn2(0);

  if (fn2_result == 0) {
    j_old[1][0] = 0;
  }

  return 0;
}