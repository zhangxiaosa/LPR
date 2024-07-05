fn d() -> u64 {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();

    fn n(aa: i32, o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ac: &mut [bool; w], ad: &mut [i32]) -> j {
        let mut ae = String::new();
        let mut t = 0;
        let y = q;
        let mut u = t;
        let mut af = true;
        let ag = 1 << ab;
        let mut ah = 0;
        let mut z: [[i32; 2]; 16] = Default::default();
        let mut af = j::l(0);

        if ab == aa {
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }

            if let Ok(r) = ae.parse() {
                af = j::k(r);
            } else {
                af = j::m;
            }
        } else {
            for i in 0..ab {
                let index = i as usize;
                t = t.max(o[index + 1][1] - o[index + 1][0]);
            }

            while u < y {
                af = true;

                for i in 0..ag {
                    let s = ad[i] + u;

                    if ac[s as usize] {
                        af = false;
                        break;
                    }

                    ad[ag + i] = s;
                    ac[s as usize] = true;
                    ah += 1;
                }

                if af {
                    z[ab as usize + 2][0] = std::i32::MAX;

                    for i in 1..ab + 2 {
                        z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                        z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                    }

                    af = n(aa, &z, p, u, ab + 1, ac, ad);

                    match af {
                        j::k(_) | j::m => break,
                        j::l(v) => {}
                    }
                }

                for i in 0..ah {
                    ac[ad[ag + i] as usize] = false;
                }

                u += 1;
            }
        }

        af
    }

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