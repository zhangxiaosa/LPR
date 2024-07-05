
struct c {
  int d : 18;
};

int i_d;

int main() {
  struct c l;
  int l_d = l.d;
  int n = i_d && l_d;
  i_d = l_d | -(l_d && l_d) - n;
}
