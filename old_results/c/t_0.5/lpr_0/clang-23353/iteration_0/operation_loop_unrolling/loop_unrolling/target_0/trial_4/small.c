typedef char a;
typedef int b;

a fn1(a p1, a p2) {
    return p1 * p2;
}

struct g {
    signed h;
};

b i;
struct g j;

int main() {
    a p3;

    // Unrolled loop iteration 1
    p3 = 6;
    j.h ^= fn1(p3, i) && 1L;
    p3--;

    // Unrolled loop iteration 2
    p3 = 5;
    j.h ^= fn1(p3, i) && 1L;
    p3--;

    // Unrolled loop iteration 3
    p3 = 4;
    j.h ^= fn1(p3, i) && 1L;
    p3--;

    return 0;
}