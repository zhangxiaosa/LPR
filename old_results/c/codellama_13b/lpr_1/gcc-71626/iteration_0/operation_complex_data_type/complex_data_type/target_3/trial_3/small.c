
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

long c = fn1;
d f = {c};

main() {}
