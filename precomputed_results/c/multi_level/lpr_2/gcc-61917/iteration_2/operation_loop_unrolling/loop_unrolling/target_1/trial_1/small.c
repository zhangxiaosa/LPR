int k;
unsigned l;
volatile unsigned m_flat[40];

unsigned fn3(signed o, unsigned p1) {
    for (; /* condition removed */;) {
        // Unrolled loop body
        for (; l; l++) {
            k = 0;
            if (k >= -27) {
                p1 = o - p1;
            }
            k = k - 6;
            if (k >= -27) {
                p1 = o - p1;
            }
            k = k - 6;
            if (k >= -27) {
                p1 = o - p1;
            }
            k = k - 6;
            if (k >= -27) {
                p1 = o - p1;
            }
            k = k - 6;
            if (k >= -27) {
                p1 = o - p1;
            }
            k = k - 6;
            if (k >= -27) {
                p1 = o - p1;
            }
        }
        p1 || m_flat[2];
    }
}

int main() {
    // Empty main function
}