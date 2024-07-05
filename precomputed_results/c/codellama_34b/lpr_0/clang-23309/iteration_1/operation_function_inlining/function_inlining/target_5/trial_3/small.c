
int fn3(unsigned char *arr, int len, int val) {
    int i;
    for (i = 0; i < len; i += 4) {
        if (arr[i] == val)
            return i;
        if (arr[i + 1] == val)
            return i + 1;
        if (arr[i + 2] == val)
            return i + 2;
        if (arr[i + 3] == val)
            return i + 3;
    }
    return -1;
}
