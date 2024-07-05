
struct c {
  int d : 18;
  int e;
  int g;
};

int d;
int e;
int g;

int main() {
  d = i.d;
  e = i.e;
  g = i.g;

  int n = d && e;
  int p = d | -(d && d) - n;
  g = p;
}
