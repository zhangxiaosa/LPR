
struct c {
  int d : 18;
  int e;
};

struct c i, j;

int main() {
  i.d = 24 | -(24 && 24) - (j.d && 24);
}
