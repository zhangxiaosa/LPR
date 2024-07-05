int fn2(int p1, int p2) { return p1 - p2; }

int i;

int fn3(int p1) {
    int o_0 = 0xE576516E;
    
    if (i)
        printf("l_1179=%lld\n", (long long)p1);
    
    p1 = fn2(p1 >= 0x809C ^ 4294967287, o_0);
    
    if (i)
        printf("l_1179=%lld\n", (long long)p1);
    
    return p1;
}

int main() {
    if (fn3(1))
        ;
}