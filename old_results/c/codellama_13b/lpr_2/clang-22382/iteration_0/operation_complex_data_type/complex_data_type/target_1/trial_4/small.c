
int i;
long j;
int k;

unsigned l;

struct h {
  int i;
  long j;
  int k;
};

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
  while (1) {
    struct h r;
    r = p5;
  }
}

int main() {}
