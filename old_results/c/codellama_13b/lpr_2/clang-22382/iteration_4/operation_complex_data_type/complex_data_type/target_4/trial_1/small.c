
int i;
long j;
int k;

int main() {
  struct h p;
  struct h r;

  while (1) {
    r = p;
    p = r;
  }

  return 0;
}
