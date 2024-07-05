
int d = 24;
int e = 6738;
int h = 165;

int main() {
  int m = e;
  int n = h && d;
  d = m | -(h && d) - n;
}
