typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
int main() {
  a c = fn1;
  d f = {c};
  // Rest of the main function code
}
