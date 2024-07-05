int r;
static char s;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o;
  r = 0 % ~(-5L / p2.o);
}