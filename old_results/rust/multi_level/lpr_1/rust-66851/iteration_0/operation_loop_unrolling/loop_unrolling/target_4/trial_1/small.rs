use std\::convert\::TryFrom;

macro_rules\! a \{
    (\$b\:expr, \$c\:ident) => \{
        \$c\::try_from(\$b\).unwrap()
    \};
\}

fn d() -> Option<u64> \{\n    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];
    enum j \{\n        k(u64),\n        l(i32),\n        m,\n    \}

    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j \{\n        if ab == aa \{\n            let mut ae = String::new();\n            for i in (0..ab).rev() \{\n                ae += &ad[1 << i].to_string();\n            \}\n            return if let Ok(r) = ae.parse() \{\n                j::k(r)\n            \} else \{\n                j::m\n            \};\n        \}\n
        let mut t = 0;
        let y = q;

        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);

        let mut u = t;
        while u < y \{\n            let mut af = true;\n            let ag = 1 << ab;\n            let mut ah = 0;\n
            for i in 0..ag \{\n                let s = ad[i] + u;\n                if ac[a! {s, usize}] \{\n                    af = false;\n                    break;\n                \}\n
                ad[ag + i] = s;\n                ac[a! {s, usize}] = true;\n                ah += 1;\n            \}\n
            if af \{\n                let mut z: x = Default::default();\n                z[a! {ab, usize} + 2][0] = std::i32::MAX;\n
                z[a! {0, usize}][0] = o[a! {0, usize}][0].min(u + o[a! {0, usize} - 1][0]);\n                z[a! {0, usize}][1] = o[a! {0, usize}][1].max(u + o[a! {0, usize} - 1][1]);\n
                z[a! {1, usize}][0] = o[a! {1, usize}][0].min(u + o[a! {1, usize} - 1][0]);\n                z[a! {1, usize}][1] = o[a! {1, usize}][1].max(u + o[a! {1, usize} - 1][1]);\n
                z[a! {2, usize}][0] = o[a! {2, usize}][0].min(u + o[a! {2, usize} - 1][0]);\n                z[a! {2, usize}][1] = o[a! {2, usize}][1].max(u + o[a! {2, usize} - 1][1]);\n
                let af = n(aa, &z, p, u, ab + 1, ac, ad);\n                match af \{\n                    j::k(_) | j::m => return af,\n                    j::l(v) => \{\}\n                \}\n            \}\n
            for i in 0..ah \{\n                ac[a! {ad[ag + a!{i, usize}], usize}] = false;\n            \}\n
            u += 1;\n        \}\n
        j::l(p)\n    \}

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ac, &mut ad) \{\n        j::k(s) => Some(s),\n        l => None,\n    \}\n}\n
fn main() \{\n    assert_eq!(d(), Some(20_313_839_404_245));\n}. 