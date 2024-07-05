char fn1(char p1_var, char p2_var) {
  return p1_var * p2_var;
}

int i_var;
int h_var;

void *fn2(unsigned int p1_var, int *p2_var, char p3_var) {
  for (p3_var = 6; p3_var != -7; p3_var--)
    h_var ^= fn1(p3_var, i_var) && 1;
  return p2_var;
}

int main() {
  return 0;
}