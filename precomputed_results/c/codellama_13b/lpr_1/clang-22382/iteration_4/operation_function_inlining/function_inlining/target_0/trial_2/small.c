
static struct h fn1(int p1, int p2, int p3, struct h p4) {
  while (1) {
    p4 = p4;
    if (p1 == 0) {
      p4.i = p2;
      p4.j = p3;
      p4.k = 0;
    } else if (p1 == 1) {
      p4.i = p2;
      p4.j = p3;
      p4.k = 1;
    } else if (p1 == 2) {
      p4.i = p2;
      p4.j = p3;
      p4.k = 2;
    } else {
      p4.i = p2;
      p4.j = p3;
      p4.k = -1;
    }
  }
}
