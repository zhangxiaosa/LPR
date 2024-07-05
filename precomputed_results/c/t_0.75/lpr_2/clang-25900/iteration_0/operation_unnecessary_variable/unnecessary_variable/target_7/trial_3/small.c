unsigned t;
int r;
static int s = -5L;

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = t % (4 / ae);
  ad.o;
}