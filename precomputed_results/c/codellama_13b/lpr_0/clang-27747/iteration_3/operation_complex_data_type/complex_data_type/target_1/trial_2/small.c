
struct c {
  int d : 18;
  int e;
};

struct c i, j;

int main() {
  i.d = j.e | -j.e;
}
