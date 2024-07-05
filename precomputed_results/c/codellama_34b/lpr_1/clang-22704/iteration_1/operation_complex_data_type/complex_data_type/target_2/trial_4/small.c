
int fn1(int *e) {
  int h = *e;
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;

  if (h == 0) {
    i = 1;
  } else {
    j = fn1(e);
    k = j * 2;
    l = k + 1;
    i = l;
  }

  return i;
}
