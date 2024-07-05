use std::convert::TryFrom;

fn main() {
    assert_eq!(
        {
            const e: i32 = 7;
            const f: i32 = 1 << 12;
            const w: usize = f as usize;

            enum VariantJ {
                K(u64),
                L(i32),
                M,
            }

            fn variant_n(aa: i32, o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ac: &mut VariantAc, ad: &mut Vec<i32>) -> VariantJ {
                // function implementation
            }

            struct VariantAc(Vec<bool>);

            let mut ac = VariantAc(vec![false; w]);
            let mut ad = vec![0i32; 1 << e];
            let mut o: [[i32; 2]; 16] = Default::default();
            o[1][0] = std::i32::MAX;

            match variant_n(e, &o, f, f, 0, &mut ac, &mut ad) {
                VariantJ::K(s) => Some(s),
                _ => None,
            }
        },
        Some(20_313_839_404_245)
    );
}
