
struct c {
  int d : 18;
  int h;
};
struct c i;
struct c j;
int main() {
  i.d = j.h && i.d;
}
