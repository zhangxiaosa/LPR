struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c l = {24, 6738, 165};

int main() {
  l.d = 0;
  int n = 0;
  l.g = l.d | -n;
}