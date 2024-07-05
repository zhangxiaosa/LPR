struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
