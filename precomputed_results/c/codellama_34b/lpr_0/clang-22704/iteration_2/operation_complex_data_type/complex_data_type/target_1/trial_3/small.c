
int d_int_value;
int d_int_ptr;

int fn1() {
  while (d_int_value) {
    fn1();
  }
  d_int_ptr = 6L;
  return 0xEEACFBBFL;
}

int main() {}
