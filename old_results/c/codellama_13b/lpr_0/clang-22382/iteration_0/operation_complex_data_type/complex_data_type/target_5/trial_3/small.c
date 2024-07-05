
struct node {
  int value;
  struct node* next;
};

struct node* fn2(struct node* p1) {
  struct node* p = p1;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct node* r = p;
    p = r;
  }
}

int main() {
  struct node* s = fn2(NULL);
  int i = s->value;
  long j = s->value;
  unsigned k = s->value;

  return 0;
}
