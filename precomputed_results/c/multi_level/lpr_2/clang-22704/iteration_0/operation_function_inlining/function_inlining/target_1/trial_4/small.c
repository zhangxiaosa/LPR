int main() {
    typedef int a;
    typedef char b;

    struct c {
        a d;
        a e;
    };

    struct c f;
    a h = 6L;
    if (f.e)
        goto i;
    
    a j;
    f.d = h;

i:
    j = 0xEEACFBBFL;
    return j;
}