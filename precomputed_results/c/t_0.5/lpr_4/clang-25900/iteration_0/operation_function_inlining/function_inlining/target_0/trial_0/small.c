struct k {
  f l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

struct k q;

void fn3(g p1) {
  struct m ad = {1957};
  ad.o = 5;
}

void fn2(a p1, struct m p2, struct k p3, struct k p4) {
  fn3(p1);
}

void fn4() {
  fn2(p, q, q, q.l);
}

int main() {
  fn4();
}