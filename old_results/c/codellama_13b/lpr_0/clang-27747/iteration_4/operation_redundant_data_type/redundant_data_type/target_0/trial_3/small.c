
int main() {
  int i, j;
  i = j;
  int n = j && i;
  i = i | -(i && i) - n;
}
