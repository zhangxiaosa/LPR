
<SYS>

long d;
long e;
long fn1() {
    if (e)
        goto i;
    fn1();
    return 0xEEACFBBFL;
i:
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
}
long main() {}

</SYS>
