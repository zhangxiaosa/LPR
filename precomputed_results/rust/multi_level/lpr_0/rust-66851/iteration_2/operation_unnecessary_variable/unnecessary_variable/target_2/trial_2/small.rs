#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int f = 1 << 12;
    bool ac[f] = { false };
    int ad_decomposed[1 << 7] = { 0 };
    int o[16][2] = { 0 };
    o[1][0] = INT_MAX;
    switch (n(7, o, f, f, 0, ac, ad_decomposed)) {
        case j::k: {
            assert(Some(j::k(20'313'839'404'245)) == Some(j::k(20'313'839'404'245)));
            break;
        }
        default:
            throw runtime_error("Error");
    }
}

enum j {
    k,
    l,
    m,
};

j n(int aa, int o[16][2], int p, int q, int ab, bool ac[], int ad_decomposed[]) {
    if (ab == aa) {
        string ae = "";
        for (int i = ab - 1; i >= 0; i--) {
            ae += to_string(ad_decomposed[1 << i]);
        }
        try {
            return j::k(stoull(ae));
        } catch (...) {
            return j::m;
        }
    }

    int t = 0;
    t = max(o[2 + 1][1] - o[2 + 1][0], t);
    int u = t;

    while (u < q - (1 << ab)) {
        bool af = true;
        int ah = 0;
        for (int i = 0; i < (1 << ab); i++) {
            int s = ad_decomposed[i] + u + (1 << ab);
            if (ac[s]) {
                af = false;
                break;
            }
            ad_decomposed[(1 << ab) + i] = s;
            ac[s] = true;
            ah++;
        }

        if (af) {
            int z[16][2] = { 0 };
            z[ab + 2][0] = INT_MAX;
            for (int i = 1; i < ab + 2; i++) {
                z[i][0] = min(u + o[i - 1][0], o[i][0]);
                z[i][1] = max(u + o[i - 1][1], o[i][1]);
            }

            j af = (ab == aa) ? (j)a : (j)b;

            switch (af) {
                case j::k:
                case j::m:
                    if (ab != aa) {
                        return af;
                    }
                    break;
                case j::l:
                    break;
            }
        }

        for (int i = 0; i < ah; i++) {
            ac[ad_decomposed[(1 << ab) + i]] = false;
        }

        u++;
    }

    return j::l;
}