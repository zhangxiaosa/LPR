
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  int p = j.d | -(j.d && j.d) - j.d;
  i.d = p;
}
