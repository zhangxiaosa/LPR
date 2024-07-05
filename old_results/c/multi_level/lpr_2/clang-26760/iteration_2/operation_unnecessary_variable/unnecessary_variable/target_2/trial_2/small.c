int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
q:
  if (g) {
    // Removed the assignment 'k = k << j;'
    // Removed the 'goto q;'
  }
}