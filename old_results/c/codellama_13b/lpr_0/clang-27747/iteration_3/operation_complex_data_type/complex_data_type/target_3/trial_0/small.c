
struct c {
  int d : 18;
  int e;
};

struct c i, j;

int main() {
  struct c l;
  int d_i = j.e;
  int d_j = j.d;
  int n = d_j && d_i;
  d_i = (d_j | -(d_j && d_i)) - n;
}
