long a;

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

long main() {}