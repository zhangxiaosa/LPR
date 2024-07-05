fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }

    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();

    if 0 == 7 {
        let mut ae = String::new();
        for i in (0..0).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }

    let mut t = 0;
    for i in 0..0 {
        let index = i as usize;
        t = t.max(o[index + 1][1] - o[index + 1][0]);
    }
    let mut u = t;
    while u < 4096 {
        let mut af = true;
        let ag = 1 << 0usize;
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
            for i in 1..1 + 2 {
                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }
            if 1 == 7 {
                let mut ae = String::new();
                for i in (0..1).rev() {
                    ae += &ad[1 << i].to_string();
                }
                return if let Ok(r) = ae.parse() {
                    j::k(r)
                } else {
                    j::m
                };
            } else {
                match 1 {
                    0 => {}
                }
            }
        }
        for i in 0..t {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(4096)
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}