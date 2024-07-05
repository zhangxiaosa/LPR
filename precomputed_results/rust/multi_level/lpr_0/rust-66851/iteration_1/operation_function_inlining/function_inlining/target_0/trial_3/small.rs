fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    enum j {
        k(u64),
        l(i32),
        m,
    }

    const aa: i32 = e;
    let o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];

    if aa == aa {
        let mut ae = String::new();
        for i in (0..aa).rev() {
            ae += &ad[1 << i].to_string();
        }
        let r_result = ae.parse();
        if let Ok(r) = r_result {
            return j::k(r);
        } else {
            return j::m;
        }
    }

    let mut t = 0;
    t = t.max(o[2 + 1][1] - o[2 + 1][0]);
    let mut u = t;
    while u < f {
        let mut af = true;
        let ag = 1 << aa;
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
            z[aa as usize + 2][0] = std::i32::MAX;
            for i in 1..aa + 2 {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            let result = main();
            let af = match result {
                j::k(_) | j::m => return result,
                j::l(_) => {}
            };
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    return j::l(f);
}