int fn1(int p2) {
    return p2;
}

int r;
static signed s = -5L;

long fn4() {
    int n = 1957;
    int o;

    o = fn1(5);
    int ae;
    ae = o;

    o = r;
    r = r % (~s / ae);

    return o;
}

int main() {
    fn4();
}