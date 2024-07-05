typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  // Inlined code of fn1() starts here
  a h = 6L;
  if (f.e)
    goto i;
  // Inlined code of fn1() ends here
}