typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
    a h = 6L;

    if (f.e)
        goto i;

    // Inlined code from fn1
    if (f.e)
        goto i;

    // Inlined recursive call to fn1

    // Inlined code from fn1
    a h = 6L;

    if (f.e)
        goto i;

    // Inlined code from fn1

    // Assign value to j
    b j = 0xEEACFBBFL;

    // Return j
    return j;

i:
    f.d = h;

    // Inlined recursive call to fn1

    // Assign value to j
    b j = 0xEEACFBBFL;

    // Return j
    return j;
}