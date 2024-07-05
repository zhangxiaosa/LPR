
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int p = j.d | -(j.d && j.d) - j.d;
  i.d = p;
}
