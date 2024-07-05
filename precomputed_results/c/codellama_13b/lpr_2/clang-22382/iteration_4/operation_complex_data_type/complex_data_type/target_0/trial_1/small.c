
int i;
long j;
int k;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int i, long j, int k) {
  while (1)
    k;
}

unsigned fn2() {
  int i;
  long j;
  int k;

  fn1(i, j, k);
  while (1) {
    int i;
    long j;
    int k;

    i = i;
    j = j;
    k = k;
  }
}

int main() {}
