
char fn1(char p1, char p2) {
  return p1 * p2;
}

int fn2(int p3_prim, struct p3_struct* p3_struct) {
  int j = 0;
  for (p3_prim = 6; p3_prim != -7; p3_prim--) {
    j ^= fn1(p3_prim, p3_struct->i) && 1L;
  }
  return 0;
}

int main() {
  int p3_prim = 0;
  struct p3_struct* p3_struct = malloc(sizeof(struct p3_struct));
  p3_struct->i = 100;
  fn2(p3_prim, p3_struct);
  free(p3_struct);
  return 0;
}
