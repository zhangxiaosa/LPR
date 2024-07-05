int d;
int e;

int main() {
    if (e)
        goto i;
    if (e)
        goto i;
    if (e)
        goto i;
    // more if statements if necessary

i:
    d = 6L;
    if (e)
        goto i;
    if (e)
        goto i;
    // more if statements if necessary

    return 0xEEACFBBFL;
}