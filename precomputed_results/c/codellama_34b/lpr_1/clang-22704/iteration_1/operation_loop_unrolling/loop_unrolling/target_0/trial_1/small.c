
typedef char b;
int d;
int e;

b fn1(h) {
    if (e) {
        d = h;
        fn1(h);
        return 0xEEACFBBFL;
    } else {
        fn1(h);
        return 0xEEACFBBFL;
    }
}

int main() {}
