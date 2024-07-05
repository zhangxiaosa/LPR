int fd;
int fe;

int main() {
    if (fe) {
        fd = 6L;
        if (fe) {
            fd = 6L;
            if (fe) {
                fd = 6L;
                // Continue inlining the function
            }
            // Continue inlining the function
        }
        // Continue inlining the function
    }
    // Continue inlining the function

    // No more function calls to fn1, so the function is fully inlined

    return 0;
}