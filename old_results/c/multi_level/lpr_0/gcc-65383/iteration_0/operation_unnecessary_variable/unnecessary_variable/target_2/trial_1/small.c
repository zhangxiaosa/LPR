static unsigned i = 175;

unsigned fn2() {
  for (;;) {
    int r[5][9][5];
    return 195; // Constant propagated
  }
}

int main() { fn2(); }.