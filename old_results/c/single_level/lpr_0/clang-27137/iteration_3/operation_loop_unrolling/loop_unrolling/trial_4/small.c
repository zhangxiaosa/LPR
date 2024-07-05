char p;

char fn5() {
    short q;
    int i;
    short r = 0;      // Assuming 'o' should be 0
    q = r;

    while (q > 1) {
        q -= 1;
        q -= 1;
        q -= 1;
        q -= 1;
        q -= 1;
    }

    if (p = q)
        ;
}

int main() {
    fn5();
    printf("checksum = %X\n", p);
    return 0;
}