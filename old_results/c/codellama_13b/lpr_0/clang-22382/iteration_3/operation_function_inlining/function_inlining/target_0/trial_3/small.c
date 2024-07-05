
struct s {
  long i;
  long j;
  long k;
};

long fn2() {
  struct s q;
  q.k;
w:
  goto w;
}

int main() {}
