
<SYS>

// Eliminate the use of the 'int' data type
#define int long

// Define the modified program
long d_int;

long fn1() {
  if (d_int)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  d_int = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}

</SYS>
