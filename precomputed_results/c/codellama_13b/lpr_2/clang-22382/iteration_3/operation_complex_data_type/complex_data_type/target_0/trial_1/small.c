
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p) {
  int i;
  long j;
  int k;
  i = p.i;
  j = p.j;
  k = p.k;
  while (1) {
    i = i + 1;
    j = j + 1;
    k = k + 1;
  }
}

unsigned fn2() {
  int i;
  long j;
  int k;
  i = 0;
  j = 0;
  k = 0;
  while (1) {
    i = i + 1;
    j = j + 1;
    k = k + 1;
  }
}

int main() {}
