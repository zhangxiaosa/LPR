
struct c {
  int d : 18;
};

int i_d;
int n;

int main() {
  struct c l;
  l.d = i_d;
  n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;
}
