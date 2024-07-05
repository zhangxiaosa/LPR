fn main() {
    const d: usize = 4;

    fn f(a00: i64, a01: i64, ..., a0(d-1): i64, a10: i64, a11: i64, ..., a(d-1)(d-1): i64, n: usize, g: usize, h: usize) -> (i64, i64, ..., i64) {
        let mut l00: i64 = 0;
        let mut l01: i64 = 0;
        ...
        let mut l0(d-1): i64 = 0;
        let mut l10: i64 = 0;
        let mut l11: i64 = 0;
        ...
        let mut l(d-1)0: i64 = 0;
        let mut l(d-1)1: i64 = 0;
        ...
        let mut l(d-1)(d-1): i64 = 0;

        for j in 0..h {
            l0(j) = a0(j);
        }

        (l00, l01, ..., l0(d-1), l10, l11, ..., l(d-1)(d-1))
    }

    const p00: i64 = 0;
    const p01: i64 = 1;
    ...
    const p0(d-1): i64 = 0;
    const p10: i64 = 0;
    const p11: i64 = 0;
    ...
    const p(d-1)0: i64 = 1;
    const p(d-1)1: i64 = 2;
    ...
    const p(d-1)(d-1): i64 = 2;

    let mut l00: i64 = 1;
    let mut l01: i64 = 0;
    ...
    let mut l0(d-1): i64 = 0;
    let mut l10: i64 = 0;
    let mut l11: i64 = 1;
    ...
    let mut l(d-1)0: i64 = 0;
    let mut l(d-1)1: i64 = 0;
    ...
    let mut l(d-1)(d-1): i64 = 1;

    let (l00, l01, ..., l0(d-1), l10, l11, ..., l(d-1)(d-1)) = f(p00, p01, ..., p0(d-1), p10, p11, ..., p(d-1)(d-1), d, d, d);
    println!("{:?}", (l00, l01, ..., l0(d-1), l10, l11, ..., l(d-1)(d-1)));
}
