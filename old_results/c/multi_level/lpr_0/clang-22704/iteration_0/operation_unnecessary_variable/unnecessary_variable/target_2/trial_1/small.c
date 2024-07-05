int f_d;
int f_e;

char fn1() {
  if (f_e) {
    fn1();
    char j;
    return j;
  } else {
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  }
}

int main() {}
