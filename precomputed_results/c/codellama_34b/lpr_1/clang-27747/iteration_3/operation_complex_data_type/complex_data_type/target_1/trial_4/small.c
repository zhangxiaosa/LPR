
int d, g;

int main() {
  int temp = d & l;
  d = (d & ~temp) | (temp & -temp);
  g = d;
  return 0;
}
