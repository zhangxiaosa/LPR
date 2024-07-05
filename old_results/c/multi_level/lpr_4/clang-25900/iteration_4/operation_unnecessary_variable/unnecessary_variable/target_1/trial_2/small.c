int r;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = 5;
  r = r % (4 / p2.o);
}