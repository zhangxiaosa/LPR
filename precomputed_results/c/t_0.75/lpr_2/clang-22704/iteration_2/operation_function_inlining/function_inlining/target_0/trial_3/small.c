int f_d;

char fn1() {
    if (f_d) {
        f_d = 6L;
        fn1();
        return 0xEEACFBBF;
    }
    return 0xEEACFBBF;
}

int main() {}
