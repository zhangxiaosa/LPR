unsigned g;
int h2 = 2453134317;
unsigned fn2() {
  for (;;) {
    if (h2)
      return 195;
    g = 0; // Removed unnecessary assignment to g
  }
}
int main() { fn2(); }
