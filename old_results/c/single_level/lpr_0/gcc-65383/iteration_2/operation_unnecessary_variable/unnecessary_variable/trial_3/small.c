unsigned g;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    int r[5];
    int(*r_row)[] = (int(*)[])r;
    int *r_element = (int *)r_row;
    g = *(r_element + i);
  }
}

int main() {
  fn2();
}