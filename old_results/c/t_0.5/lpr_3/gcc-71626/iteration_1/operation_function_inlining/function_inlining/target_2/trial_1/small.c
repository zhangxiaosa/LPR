typedef long d __attribute__((__vector_size__(sizeof a)));

int main() {
  long c = 0;
  d f = {c};
  // Rest of the main function
  return 0;
}