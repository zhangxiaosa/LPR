int fd = 0;
int fe = 0;

void fn1() {
  if (fe) {
    fd = 6;
    fn1();
  }
  fn1();
}

int main() {}