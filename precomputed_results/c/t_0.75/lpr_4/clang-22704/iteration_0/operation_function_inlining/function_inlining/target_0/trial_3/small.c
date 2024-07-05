typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
    a h = 6L;

    if (f.e) {
        f.d = h;
        return 0xEEACFBBFL;
    } else {
        // Inlined code of fn1()
        if (f.e) {
            f.d = h;
            return 0xEEACFBBFL;
        } else {
            // Inlined recursive call of fn1()
            a h = 6L;

            if (f.e) {
                f.d = h;
                return 0xEEACFBBFL;
            } else {
                // Inlined recursive call of fn1()
                a h = 6L;

                if (f.e) {
                    f.d = h;
                    return 0xEEACFBBFL;
                } else {
                    // Inlined recursive call of fn1()
                    a h = 6L;

                    if (f.e) {
                        f.d = h;
                        return 0xEEACFBBFL;
                    } else {
                        // Inlined recursive call of fn1()
                        a h = 6L;

                        if (f.e) {
                            f.d = h;
                            return 0xEEACFBBFL;
                        } else {
                            // ... continue inlining recursive calls of fn1()
                        }
                    }
                }
            }
        }
    }
}