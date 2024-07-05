use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {
        // Unrolled loop for i in 0..ab + 2
        // i = 1
        // loop body

        // i = 2
        // loop body

        // final iteration with i = ab + 1

        let mut t = 0;
        let y = q;
        // Unrolled loop for i in 0..ab
        // i = 0
        // loop body

        // i = 1
        // loop body

        // i = 2
        // loop body

        // final iteration with i = ab - 1

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            // Unrolled loop for i in 0..ag
            // i = 0
            // loop body

            // i = 1
            // loop body

            // i = 2
            // loop body

            // final iteration with i = ag - 1

            if af {
                let mut z: x = Default::default();
                // Unrolled loop for i in 1..ab + 2
                // i = 1
                // loop body

                // i = 2
                // loop body

                // final iteration with i = ab + 1

                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            // Unrolled loop for i in 0..ah
            // i = 0
            // loop body

            // i = 1
            // loop body

            // i = 2
            // loop body

            // final iteration with i = ah - 1

            u += 1;
        }
        j::l(p)
    }
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => Some(s),
        l => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}