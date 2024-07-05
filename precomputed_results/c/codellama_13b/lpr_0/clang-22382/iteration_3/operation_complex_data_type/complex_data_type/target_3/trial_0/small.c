
int i;
int j;
int k;

int* p5;
int* q;
int* r;

void fn1(int* p5) {
  p5->k;
w:
  goto w;
}

void fn2() {
  q = malloc(sizeof(struct s));
  fn1(q);
  for (;;) {
    r = q;
    q = r;
  }
}

int main() {}
