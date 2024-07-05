typedef long d __attribute__((__vector_size__(sizeof a)));

int main() {
  long c = fn1;
  d f = {c};
}