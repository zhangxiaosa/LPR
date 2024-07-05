fn d() -> u64 {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(
        aa: i32,
        o: &[[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool; w],
        ad: &mut [i32; 1 << e],
    ) -> j {
        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let mut t = 0;
        let y = q;
        for i in (0..ab) {
            let index = i as usize;
            t = t.max(o[index + 1][1] - o[index + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[ad[(ag + i) as usize] as usize] = false;
            }
            u += 1;
        }
        j::l(p)
    }
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => s,
        l => 0,
    }
}
fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}
