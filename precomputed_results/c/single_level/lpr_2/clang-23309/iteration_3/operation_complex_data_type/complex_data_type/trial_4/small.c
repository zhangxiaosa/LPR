typedef struct {
    unsigned p1;
    int p2;
} ComplexType;

void fn1(unsigned p1, int p2) {
    printf("checksum = %X\n", p1);
}

int main() {
    ComplexType complexVariable;

    unsigned p1 = complexVariable.p1;
    int p2 = complexVariable.p2;

    fn1(p1, p2);

    return 0;
}