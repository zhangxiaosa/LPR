
struct h {
  long i;
  long j;
  long k;
};

int main() {
  struct h r;
  long i;
  long j;
  long k;
  r.i = i;
  r.j = j;
  r.k = k;
  while (1) {
    i = r.i;
    j = r.j;
    k = r.k;
    r.i = i;
    r.j = j;
    r.k = k;
  }
}
