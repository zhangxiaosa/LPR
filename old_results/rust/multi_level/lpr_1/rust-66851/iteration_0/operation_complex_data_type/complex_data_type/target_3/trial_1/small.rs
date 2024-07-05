#include <iostream>
#include <cassert>
#include <string>
#include <type_traits>

struct j {
    j(std::u64 s) : k(s) {}
    j(std::i32 v) : l(v) {}
    j() : m() {}

    std::u64 k;
    std::i32 l;
    bool m;
};

template <typename T>
std::string to_string(const T& value) {
    return std::to_string(value);
}

template <>
std::string to_string(const j& value) {
    if (value.m) {
        return "m";
    } else if (value.k.has_value()) {
        return std::to_string(value.k.value());
    } else {
        return std::to_string(value.l);
    }
}

std::ostream& operator<<(std::ostream& os, const j& value) {
    os << to_string(value);
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::u64& value) {
    os << to_string(value);
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::i32& value) {
    os << to_string(value);
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::string& value) {
    os << value;
    return os;
}

namespace std {
    std::u64 clz(const std::u64& value) {
        return 64 - __builtin_clzll(value);
    }
}

j n(const std::i32& aa, const std::array<std::array<std::i32, 2>, 16>& o, const std::i32& p, const std::i32& q, const std::i32& ab, std::array<bool, 32768>& ac, std::array<std::i32, 128>& ad);

j n_unrolled(const std::i32& aa, const std::array<std::array<std::i32, 2>, 16>& o, const std::i32& p, const std::i32& q, const std::i32& ab, std::array<bool, 32768>& ac, std::array<std::i32, 128>& ad) {
    std::i32 t = 0;

    // Unrolled iteration 0
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);

    // Unrolled iteration 1
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);

    // Unrolled iteration 2
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);

    std::i32 u = t;
    while (u < q) {
        bool af = true;
        std::i32 ag = 1 << ab;
        std::i32 ah = 0;
        for (std::i32 i = 0; i < ag; i++) {
            std::i32 s = ad[i] + u;
            if (ac[s]) {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s] = true;
            ah++;
        }
        if (af) {
            std::array<std::array<std::i32, 2>, 16> z;
            z[ab + 2][0] = std::numeric_limits<std::i32>::max();
            for (std::i32 i = 1; i < ab + 2; i++) {
                z[i][0] = std::min(o[i][0], u + o[i - 1][0]);
                z[i][1] = std::max(o[i][1], u + o[i - 1][1]);
            }
            j af = n(aa, z, p, u, ab + 1, ac, ad);
            if (af.k.has_value() || af.m) {
                return af;
            }
        }
        for (std::i32 i = 0; i < ah; i++) {
            ac[ad[ag + i]] = false;
        }
        u++;
    }
    return j(p);
}

j n(const std::i32& aa, const std::array<std::array<std::i32, 2>, 16>& o, const std::i32& p, const std::i32& q, const std::i32& ab, std::array<bool, 32768>& ac, std::array<std::i32, 128>& ad) {
    if (ab == aa) {
        std::string ae;
        for (std::i32 i = ab - 1; i >= 0; i--) {
            ae += std::to_string(ad[1 << i]);
        }
        try {
            std::u64 r = std::stoull(ae);
            return j(r);
        } catch (const std::exception& e) {
            return j();
        }
    }
    std::i32 t = 0;
    std::i32 y = q;
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);
    t = std::max(t, o[ab + 1][1] - o[ab + 1][0]);
    std::i32 u = t;
    while (u < y) {
        bool af = true;
        std::i32 ag = 1 << ab;
        std::i32 ah = 0;
        for (std::i32 i = 0; i < ag; i++) {
            std::i32 s = ad[i] + u;
            if (ac[s]) {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s] = true;
            ah++;
        }
        if (af) {
            std::array<std::array<std::i32, 2>, 16> z;
            z[ab + 2][0] = std::numeric_limits<std::i32>::max();
            for (std::i32 i = 1; i < ab + 2; i++) {
                z[i][0] = std::min(o[i][0], u + o[i - 1][0]);
                z[i][1] = std::max(o[i][1], u + o[i - 1][1]);
            }
            j af = n(aa, z, p, u, ab + 1, ac, ad);
            if (af.k.has_value() || af.m) {
                return af;
            }
        }
        for (std::i32 i = 0; i < ah; i++) {
            ac[ad[ag + i]] = false;
        }
        u++;
    }
    return j(p);
}

std::ostream& operator<<(std::ostream& os, const std::array<std::array<std::i32, 2>, 16>& value) {
    os << "[";
    for (std::i32 i = 0; i < 16; i++) {
        os << "[" << value[i][0] << ", " << value[i][1] << "]";
        if (i != 15) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::array<bool, 32768>& value) {
    os << "[";
    for (std::i32 i = 0; i < 32768; i++) {
        os << value[i];
        if (i != 32767) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::array<std::i32, 128>& value) {
    os << "[";
    for (std::i32 i = 0; i < 128; i++) {
        os << value[i];
        if (i != 127) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

j d() {
    const std::i32 e = 7;
    const std::i32 f = 1 << 12;
    const std::i32 w = f;
    std::array<bool, 4096> ac;
    ac.fill(false);
    std::array<std::i32, 128> ad;
    ad.fill(0);
    std::array<std::array<std::i32, 2>, 16> o;
    o[1][0] = std::numeric_limits<std::i32>::max();
    j result = n(e, o, f, f, 0, ac, ad);
    if (result.k.has_value()) {
        return result;
    } else {
        return j();
    }
}

int main() {
    j result = d();
    if (result.k.has_value()) {
        assert(result.k.value() == 203_138_394_042_45ull);
    } else {
        assert(false);
    }
    return 0;
}