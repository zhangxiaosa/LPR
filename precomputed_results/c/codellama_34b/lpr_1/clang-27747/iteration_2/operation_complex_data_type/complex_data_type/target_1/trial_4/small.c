
int d = i.d;
int e = i.e;
int g = i.g;

int main() {
  int l.d = d;
  int n = d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  g = p;
}
