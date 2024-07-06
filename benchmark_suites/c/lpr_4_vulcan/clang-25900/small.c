int fn1(r, o) { return r; }
char r;
int ae;
int main() {
  struct {
    int main : 18;
    int r : 1;
  } main = {1957};
  main.r = fn1(5, 5);
  ae = main.r;
  main.r = r = r % (4 / ae);
  main.r;
}
