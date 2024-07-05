void fn1(p1) { printf("checksum = %X\n", p1); }

struct p {
    int ab;
    signed q : 22;
};

struct r {
    unsigned ab;
    unsigned s;
};

struct r t;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
    // No changes to this function
}

int main() {
    return 0;
}