
typedef long a;

fn1() {}

typedef a d;

d fn2() { return (d){(long)fn1}; }

main() {}
