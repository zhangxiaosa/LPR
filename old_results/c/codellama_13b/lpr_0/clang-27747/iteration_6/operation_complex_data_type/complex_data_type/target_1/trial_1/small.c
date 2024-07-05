
struct c{
  int d;
};

int i_d;

int main() {
  struct c l;
  l.d = i_d;
  int n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;
}
