int f_d;
int f_e;

int main() {
  if (f_e) {
    f_d = 6L;
    if (f_e) {
      f_d = 6L;
      // ...
    } else {
      // ...
    }
  } else {
    // ...
  }
}