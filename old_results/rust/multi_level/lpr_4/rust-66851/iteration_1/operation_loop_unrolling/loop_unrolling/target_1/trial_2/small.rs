fn d() -> u64 {
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
        ac: &mut [bool; 8192],
        ad: &mut [i32],
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
        // Unrolled loop
        let len = ab / 2;
        for i in 0..len {
            let index1 = (i * 2) as usize;
            let index2 = (i * 2 + 1) as usize;
            t = t.max(o[index1 + 1][1] - o[index1 + 1][0]);
            t = t.max(o[index2 + 1][1] - o[index2 + 1][0]);
        }
        let mut u = t;
        while u < q {
            let mut af = true;
            let ag = 1 << ab;
            let mut t = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[s as usize] = true;
                t += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }
            for i in 0..t {
                ac[ad[ag + i] as usize] = false;
            }
            u += 1;
        }
        j::l(p)
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(7, &o, 4096, 4096, 0, &mut ac, &mut ad) {
        j::k(s) => s,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}