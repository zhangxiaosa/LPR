
struct c {
  int d : 18;
};

int i_d;

int main() {
  int d = i_d;
  int n = i_d && d;
  i_d = d | -(d && d) - n;
}
