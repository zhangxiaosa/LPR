int r;
int t;

int main() {
  struct {
    int n : 18;
    int o : 1;
  } ad = {1957};

  ad.o = 5;
  ad.o = 0;
  r = t % (4 / ad.o);
  0;
}