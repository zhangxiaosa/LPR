
typedef long long d;

d fn1() {
    return (d){fn1};
}

int main() {
    d a = fn1();
    d b = fn1();
    d c = fn1();
    d d = fn1();

    /* Do something with the variables */

    return 0;
}
