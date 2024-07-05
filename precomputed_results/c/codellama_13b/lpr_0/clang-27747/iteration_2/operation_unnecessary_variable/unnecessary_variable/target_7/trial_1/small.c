
struct c {
  int d : 18;
  int e;
};

struct c i, j;

int main() {
  j.d = 6738;
  int n = j.d && j.e;
  i.d = j.e | -(j.e && j.e) - n;
}
