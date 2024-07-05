
struct c {
  int d : 18;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int p = j.d;
  int q = p && l.d;
  int r = l.d;
  i.d = r | -(r && l.d) - q;
}

int main() {}
