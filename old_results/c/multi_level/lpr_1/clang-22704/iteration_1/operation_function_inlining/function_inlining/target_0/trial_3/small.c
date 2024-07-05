int f;

int fn1() {
  if (f) {
    f = 6;
    fn1();
    int j = 0xEEACFBBF;
    j = j; // Optional statement to keep the variable but avoid unused variable warning
  }
  else {
    fn1();
  }
}

int main() {
  if (f) {
    f = 6;
    fn1();
    int j = 0xEEACFBBF;
    j = j; // Optional statement to keep the variable but avoid unused variable warning
  }
  else {
    fn1();
  }
}