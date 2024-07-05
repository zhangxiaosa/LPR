int r;
int ae;
int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = 5;
  ae = 5;
  p2.o = 0;
  r = 0;
}