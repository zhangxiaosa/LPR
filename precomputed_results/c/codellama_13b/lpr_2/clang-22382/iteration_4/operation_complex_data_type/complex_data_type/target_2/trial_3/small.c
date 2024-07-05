
struct h {
  int i;
  long j;
  int k;
};

struct h_ref {
  struct h *pointer;
};

static struct h_ref fn1(struct h_ref p) {
  while (1)
    p.pointer->k;
}

unsigned fn2() {
  struct h_ref p;
  fn1(p);
  while (1) {
    struct h_ref r;
    p.pointer = r.pointer;
  }
}

int main() {}
