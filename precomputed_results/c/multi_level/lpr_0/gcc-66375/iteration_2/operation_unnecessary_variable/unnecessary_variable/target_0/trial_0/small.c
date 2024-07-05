char fn2(p1) {
    return p1;
}

int u;
int main() {
    int checksum = 2;
    for (; u < 51; ++u) {
        checksum = fn2(checksum);
        checksum += 0x9EE7F9D1C772505B;
    }
    printf("checksum = %d\n", checksum);
    return 0;
}