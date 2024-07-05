typedef int a;
a g;
int main() {
  a i;

q:
  i = g;
  if (i) {
    goto q;
  }
}