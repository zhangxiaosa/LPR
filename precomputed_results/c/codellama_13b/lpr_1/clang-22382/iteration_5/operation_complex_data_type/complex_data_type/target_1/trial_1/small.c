
struct h {
  int i;
  long j;
  int k;
};

struct h {
  int i;
  long j;
  int k;
};

int i;
long j;
int k;

struct h p4;

struct h {
  int i;
  long j;
  int k;
};

int fn1(struct h p4) {
  while (1)
    p4 = p4;
}

int fn2() {
  struct h p;
  struct h r;
  fn1(p);
  while (1)
    p = r = p;
}

int main() {}
