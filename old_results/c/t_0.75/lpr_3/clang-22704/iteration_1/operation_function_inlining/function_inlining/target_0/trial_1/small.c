int f;

int main() {
    if (f) {
        goto i;
    }
    // Inline fn1() body
    if (f) {
        goto i;
    }
    // End of fn1() body
    return 0;
i:
    f = 6;
    // Inline fn1() body
    if (f) {
        goto i;
    }
    // End of fn1() body
    return 0;
}