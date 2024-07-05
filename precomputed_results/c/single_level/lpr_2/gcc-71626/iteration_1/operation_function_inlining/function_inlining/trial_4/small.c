typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

int main() {
  d f = {fn1};
  // Rest of the main function
  return 0;
}