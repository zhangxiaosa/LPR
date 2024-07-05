
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  int n = j.d;
  i.d = j.d | -n;
}
