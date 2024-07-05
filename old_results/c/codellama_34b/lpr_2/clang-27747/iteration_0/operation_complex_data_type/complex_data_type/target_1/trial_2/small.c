
struct c {
  unsigned int x;
  signed int y;
};

int main() {
  struct c l = {24, 6738, 165};
  int m = l.x;
  l.y = m;
  int n = l.x && l.y;
  int o = l.y;
  int p = o | -(l.x && l.y) - n;
  l.y = p;
}
