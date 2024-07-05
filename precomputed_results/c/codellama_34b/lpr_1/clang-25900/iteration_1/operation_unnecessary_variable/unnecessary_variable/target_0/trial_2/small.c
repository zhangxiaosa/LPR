
typedef unsigned uint;
uint fn1(uint p1, int p2) { return p2; }
int r;
static int s = -5;
int u;

int fn4() {
  int ae = u;
  r = ae % (~s / u);
}

int main() { fn4(); }
