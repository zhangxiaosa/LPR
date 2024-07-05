fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as _;
    type G = [i32; 1 << E];
    type H = [bool; W];
    type X = [[i32; 2]; 16];

    let mut ac = [false; W];
    let mut ad = [0i32; 1 << E];
    let mut o: X = Default::default();
    o[1][0] = std::i32::MAX;

    let mut stack = Vec::new();
    stack.push((E, o, F, F, 0, &mut ac, &mut ad));

    while let Some((ab, o, p, q, aa, ac, ad)) = stack.pop() {
        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            if let Ok(r) = ae.parse() {
                let result = j::k(r);
                match result {
                    j::k(s) => {
                        println!("{:?}", s);
                        return;
                    }
                    _ => continue,
                }
            } else {
                continue;
            }
        }

        let mut t = 0;
        let y = q;
        for i in 0..ab {
            t = t.max(o[i + 1][1] - o[i + 1][0]);
        }

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[s] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[s] = true;
                ah += 1;
            }
            if af {
                let mut z: X = Default::default();
                z[ab + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[i][0] = o[i][0].min(u + o[i - 1][0]);
                    z[i][1] = o[i][1].max(u + o[i - 1][1]);
                }
                stack.push((aa, z, p, u, ab + 1, ac, ad));
            }
            for i in 0..ah {
                ac[ad[ag + i]] = false;
            }
            u += 1;
        }
    }
}

enum j {
    k(u64),
    l(i32),
    m,
}

fn a(b: i32, c: Ident) -> j {
    c.try_from(b).unwrap()
}