
typedef long d;
d fn1() {}
typedef d d1[];
d1 fn2() { return (d1[]){fn1}; }
main() {}
