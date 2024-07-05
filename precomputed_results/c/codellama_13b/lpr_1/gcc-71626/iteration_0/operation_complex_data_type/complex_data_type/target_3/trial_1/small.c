
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

long fn2_c = fn1;
d fn2_f = {fn2_c};

main() {}
