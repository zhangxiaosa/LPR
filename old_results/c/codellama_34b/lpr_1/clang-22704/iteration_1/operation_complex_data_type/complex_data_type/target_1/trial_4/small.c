
int d;
int e;

// Function to calculate the value of e
int fn1(int h) {
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = h;
  fn1(h);
  return 0xEEACFBBFL;
}

// Function to process the value of e
int process_e(int e) {
  if (e) {
    d = e;
    fn1(e);
    return 0xEEACFBBFL;
  }
  return 0;
}

int main() {
  int e = fn1(0);
  int d = process_e(e);
  return d;
}
