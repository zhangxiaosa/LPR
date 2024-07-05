
int main() {
    d fn2_result = fn2();
    // Use fn2_result to access the array elements
    for (int i = 0; i < 100; i++) {
        printf("%ld\n", fn2_result[i]);
    }
    return 0;
}
