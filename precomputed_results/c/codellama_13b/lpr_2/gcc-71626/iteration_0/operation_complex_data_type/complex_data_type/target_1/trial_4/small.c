
int main() {
  long c = 0;
  long_array[0] = c;
  long_vector[0] = c;
  long_pointer = &c;
  long_reference = c;
  printf("f[0] = %ld\n", long_array[0]);
  printf("f[0] = %ld\n", long_vector[0]);
  printf("f[0] = %ld\n", *long_pointer);
  printf("f[0] = %ld\n", long_reference);
  return 0;
}
