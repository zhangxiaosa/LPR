
int d = 24;
int e = 6738;
int f = 165;
int g;
int h;

int main() {
  d = e;
  h = d && f;
  g = h | -(f && d) - h;
}
