
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  int n = j.d;
  int p = n | -(n && n) - n;
  i.d = p;
}
