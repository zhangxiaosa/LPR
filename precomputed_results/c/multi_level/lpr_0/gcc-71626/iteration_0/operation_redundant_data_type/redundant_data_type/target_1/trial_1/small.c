typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = 0; // Assuming 0 as a placeholder for the value of fn1
  long f = {c};
  return f;
}

int main() {
  return 0;
}