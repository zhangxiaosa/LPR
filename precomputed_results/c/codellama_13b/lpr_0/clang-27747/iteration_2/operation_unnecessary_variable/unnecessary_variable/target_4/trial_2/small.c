
struct c {
  int d : 18;
  int e;
};

struct c i;
struct c j;

int main() {
  int l = 24;
  l.d = j.e;
  int n = l.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
