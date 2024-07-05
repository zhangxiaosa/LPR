
int fn2(int p1) {
    int j = 0;
    for (int i = 0; i < 6; i++)
        j ^= fn1(p1, i);
    return j;
}
