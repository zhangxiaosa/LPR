char fn1(char p1, char p2) {
    return p1 * p2;
}

signed int h;
int i;

int main() {
    char p3;
    signed int b = 0;
    
    for (p3 = 6; p3 != -7; p3--) {
        char result = fn1(p3, i);
        b ^= result & 1;
    }
    
    return 0;
}