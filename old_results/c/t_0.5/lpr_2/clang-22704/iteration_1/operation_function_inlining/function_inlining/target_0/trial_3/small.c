struct {
  int d;
  int e;
} f;

char fn1() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // ... continue the nested if statements as needed
      }
    }
  }
}

int main() {}
