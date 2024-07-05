struct {
  int d;
  int e;
} f;

int main() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
    }
  }
}