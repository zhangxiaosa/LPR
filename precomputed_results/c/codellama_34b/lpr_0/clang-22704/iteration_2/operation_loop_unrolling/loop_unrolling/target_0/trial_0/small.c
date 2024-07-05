
<SYS>

int d_int;

int fn1() {
    if (d_int) {
        goto j;
    }
    fn1();
    return 0xEEACFBBFL;
j:
    d_int = 6L;
    fn1();
    return 0xEEACFBBFL;
}

int main() {
    for (int i = 0; i < 10; i++) {
        fn1();
    }
    return 0;
}

</SYS>
