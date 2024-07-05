int fn1(int p1, int p2) {
    return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
    return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn6() {
    int ab;

    if (0x4F92L < (ab = fn1(o, o), 6))
        ;
    else if (o <= 0xE3L)
        ;
    else if (ab)
        return m;

    if (n + 1 < 12) {
        n = fn3(n + 1, 3);

        if (0x4F92L < (ab = fn1(o, o), 6))
            ;
        else if (o <= 0xE3L)
            ;
        else if (ab)
            return m;

        if (n + 2 < 12) {
            n = fn3(n + 2, 3);

            if (0x4F92L < (ab = fn1(o, o), 6))
                ;
            else if (o <= 0xE3L)
                ;
            else if (ab)
                return m;

            if (n + 3 < 12) {
                n = fn3(n + 3, 3);

                if (0x4F92L < (ab = fn1(o, o), 6))
                    ;
                else if (o <= 0xE3L)
                    ;
                else if (ab)
                    return m;
            }
        }
    }

    return m;
}

int main() {
    fn6();
}