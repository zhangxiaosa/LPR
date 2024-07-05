struct c {
  int d : 18;
};

struct c i;

int main() {
  struct c l = {24};
  l.d = 0;
  int n = 0;
  i.g = l.d;
}