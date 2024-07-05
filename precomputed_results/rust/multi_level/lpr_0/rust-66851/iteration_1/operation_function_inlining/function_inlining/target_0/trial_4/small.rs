fn main() {
    const f: i32 = 1 << 12;
    const w: usize = f as _;

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << 7];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    let mut t = 0;
    t = t.max(o[1][1 - 1] - o[1][0 - 1]);
    let mut u = t;
    while u < f {
        let mut af = true;
        let ag = 1 << 0;
        let mut ah = 0;
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
            let mut z: [[i32; 2]; 16] = Default::default();
            z[0 + 1][0] = std::i32::MAX;
            for i in 1..0 + 1 {
                z[i][0] = o[i][0].min(u + o[i - 1][0]);
                z[i][1] = o[i][1].max(u + o[i - 1][1]);
            }
            let af = {
                if 0 == 0 {
                    let mut ae = String::new();
                    for i in (0..0).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        j::k(r)
                    } else {
                        j::m
                    }
                } else {
                    j::l(0)
                }
            };
            match af {
                j::k(_) | j::m => break,
                j::l(_) => {}
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(f)
}
