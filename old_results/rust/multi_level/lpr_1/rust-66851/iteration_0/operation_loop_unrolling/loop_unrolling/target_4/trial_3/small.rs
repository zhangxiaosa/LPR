use std\::convert\::TryFrom;\n\nmacro_rules\! a \{\n    (\$b\:expr, \$c\:ident) => \{\n        \$c\::try_from(\$b\).unwrap()\n    \};\n\}\n\nfn d() -> Option<u64> {\n    const e: i32 = 7;\n    const f: i32 = 1 << 12;\n    const w: usize = f as _;\n    type g = [i32];\n    type h = [bool];\n    type x = [[i32; 2]; 16];\n    enum j {\n        k(u64),\n        l(i32),\n        m,\n    }\n\n    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {\n        if ab == aa {\n            let mut ae = String::new();\n            for i in (0..ab).rev() {\n                ae += &ad[1 << i].to_string();\n            }\n            return if let Ok(r) = ae.parse() {\n                j::k(r)\n            } else {\n                j::m\n            };\n        }\n\n        let mut t = 0;\n        let y = q;\n\n        // Loop unrolled section for (0..ab).rev()\n        // Unrolled iteration 0\n        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);\n\n        // Unrolled iteration 1\n        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);\n\n        // Unrolled iteration 2\n        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);\n
        // ...unrolled iterations 3 to 16...

        // Unrolled iteration 16
        t = t.max(o[a! {16, usize} + 1][1] - o[a! {16, usize} + 1][0]);

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