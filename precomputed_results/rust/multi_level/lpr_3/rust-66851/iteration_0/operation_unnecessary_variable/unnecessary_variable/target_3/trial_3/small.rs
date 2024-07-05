use std::convert::TryFrom;

fn d() -> Option<u64> {
    const f: i32 = 1 << 12;
    enum j {
        k(u64),
        m,
    }
    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32) -> j {
        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &(1 << i).to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let mut t = 0;
        let y = q;
        for i in 0..ab {
            t = t.max(o[i as usize + 1][1] - o[i as usize + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = i + u;
                if (s as usize) >= ac_decomposed.len() || ac_decomposed[s as usize] {
                    af = false;
                    break;
                }
                ah += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[(ab as usize) + 2][0] = std::i32::MAX;
                for i in 1..=(ab as usize + 2) {
                    z[i][0] = o[i][0].min(u + o[(i - 1) as usize][0]);
                    z[i][1] = o[i][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1);
                match af {
                    j::k(_) | j::m => return af,
                }
            }
            u += 1;
        }
        j::m
    }
    let mut ad = [0i32; 1 << 7];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    match n(7, &o, f, f, 0) {
        j::k(s) => Some(s),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}