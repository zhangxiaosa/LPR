
struct c {
  int d : 18;
  int f;
};

int d;
int f;
int j;
int n;

int main() {
  d = 24;
  f = 6738;
  j = d && f;
  n = j && d;
  d = d | -(f && d) - n;
}
