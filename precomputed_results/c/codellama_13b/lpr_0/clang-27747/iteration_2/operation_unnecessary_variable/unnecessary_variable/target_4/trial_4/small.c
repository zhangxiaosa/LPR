
struct c {
  int d : 18;
  int e;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738};
  l.d = j.e;
  int n = j.d;
  i.d = l.d | -(l.d && j.d) - n;
}
