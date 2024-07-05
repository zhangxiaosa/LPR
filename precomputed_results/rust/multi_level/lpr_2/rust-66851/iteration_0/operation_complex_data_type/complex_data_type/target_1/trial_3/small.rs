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

            type j = Option<i32>;

            fn n(
                aa: i32,
                o: &[(i32, i32); 16],
                p: i32,
                q: i32,
                ab: i32,
                ac: &mut [bool],
                ad: &mut [i32],
            ) -> j {
                // Rest of the function
            }

            let mut ac = [false; w];
            let mut ad = [0i32; 1 << e];

            let mut o: [(i32, i32); 16] = Default::default();
            o[1][0] = std::i32::MAX;

            match n(e, &o, f, f, 0, &mut ac, &mut ad) {
                Some(s) => Some(s),
                _ => None,
            }
        },
        Some(20_313_839_404_245)
    );
}