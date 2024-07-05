
struct c {
    int d : 18;
    int e;
    unsigned f;
    int g;
    int h;
};

int i_d;
int i_e;
unsigned i_f;
int i_g;
int i_h;

int j_d;
int j_e;
unsigned j_f;
int j_g;
int j_h;

int fn1() {
    struct c l = {24, 6738, 165};
    int m = j_e;
    l.d = m;
    int n = j_h && l.d;
    int o = l.d;
    int p = o | -(l.f && l.d) - n;
    i_g = p;
}

int main() {}
