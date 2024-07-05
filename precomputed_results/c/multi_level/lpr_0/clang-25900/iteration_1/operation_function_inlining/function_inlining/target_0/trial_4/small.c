int r;
static int s = -5L;
unsigned t;
int u;
struct m {
    int n : 18;
    int o : 1;
};

int fn4() {
    struct m ad = {1957};
  
    // Inlined fn1(5)
    ad.o = 5;
    
    int ae;
    ae = ad.o;
    
    // ad.o = u (no change)
    ad.o = u;
    
    // Inlined t % (~s / ae)
    r = t % (~s / ae);
    
    // Removed redundant expression ad.o
}

int main() {
    fn4();
}