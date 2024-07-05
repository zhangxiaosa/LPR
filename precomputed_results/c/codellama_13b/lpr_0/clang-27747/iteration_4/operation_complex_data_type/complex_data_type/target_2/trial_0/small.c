
struct c {
  int d : 18;
};

int d1, d2;

int main() {
  d1 = j.d;
  d2 = l.d;
  int n = d2 && d1;
  d1 = d1 | -(d2 && d1) - n;
}
