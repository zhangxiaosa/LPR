use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
    assert_eq!(
        {
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
                // ... omitted for brevity

                let mut u = t;

                let mut af = true;
                let ag = 1 << ab;
                let mut ah = 0;
                let i0 = 0;
                let s0 = ad[i0] + u;
                if ac[a! {s0, usize}] {
                    af = false;
                } else {
                    ad[ag + i0] = s0;
                    ac[a! {s0, usize}] = true;
                    ah += 1;
                }

                let i1 = 1;
                let s1 = ad[i1] + u;
                if ac[a! {s1, usize}] {
                    af = false;
                } else {
                    ad[ag + i1] = s1;
                    ac[a! {s1, usize}] = true;
                    ah += 1;
                }

                // Continue unrolling until ab - 1

                // ... omitted for brevity

                j::l(p)
            }
            // ... omitted for brevity
        },
        Some(20_313_839_404_245)
    );
}
