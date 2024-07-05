int f_e;

char fn1() {
  if (f_e)
    fn1();
  return 0xEEACFBBFL;
}

int main() {}
