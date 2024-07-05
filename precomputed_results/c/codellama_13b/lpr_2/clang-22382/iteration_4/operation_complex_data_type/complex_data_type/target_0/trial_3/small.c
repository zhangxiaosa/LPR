
struct h {
  int i;
  long j;
  int k;
};

struct h p;

int i;
long j;
int k;

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h r;
  p = r = p;
}

int main() {}
