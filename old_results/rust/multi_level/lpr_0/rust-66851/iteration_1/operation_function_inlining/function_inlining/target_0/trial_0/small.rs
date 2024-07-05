fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    let aa = e;
    let mut ab = 0;
    let mut p = f;
    let mut q = f;
    let mut u = 0;
    let mut t = 0;
    while ab < aa {
        if (ab + 1) == aa {
            let mut ae = String::new();
            for i in (0..(ab + 1)).rev() {
                ae += &ad[1 << i].to_string();
            }
            match if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            } {
                j::k(_) | j::m => return,
                j::l(_) => {}
            }
        }
        t = t.max(o[(ab + 1) as usize][1] - o[(ab + 1) as usize][0]);
        u = t;
        while u < q {
            let mut af = true;
            let ag = 1 << (ab + 1);
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
                z[(ab + 1) as usize][0] = std::i32::MAX;
                for i in 1..(ab + 1 + 2) {
                    z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }
                ab += 1;
                q = u;
                continue;
            }
            for i in 0..ah {
                ac[ad[ag + i] as usize] = false;
            }
            u += 1;
        }
        ab -= 1;
    }
}