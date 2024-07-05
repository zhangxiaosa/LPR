
int e;
int *h;

int fn1(int *p) {
  if (e) {
    *p = 0xEEACFBBFL;
    fn1(p);
    return 0xEEACFBBFL;
  }
  fn1(p);
  return 0xEEACFBBFL;
}

int main() {
  h = malloc(sizeof(int));
  *h = 0xEEACFBBFL;
  fn1(h);
  free(h);
  return 0;
}
