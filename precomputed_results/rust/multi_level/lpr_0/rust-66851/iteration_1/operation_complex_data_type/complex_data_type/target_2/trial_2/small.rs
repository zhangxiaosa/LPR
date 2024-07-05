fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => {
            assert_eq!(Some(s), Some(20_313_839_404_245));
        }
        _ => panic!(),
    }
}

enum j {
    k(u64),
    l(i32),
    m,
}

fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
    if ab == aa {
        let ae = ad[0..aa as usize].iter().map(|&x| x.to_string()).collect::<String>();
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }

    let mut t = o[2 + 1][1] - o[2 + 1][0];
    let mut u = t;

    while u < q {
        let ag = 1 << ab;
        let mut ah = 0;
        ad[0..ag as usize].iter_mut().for_each(|x| {
            let s = *x + u;
            if ac[s as usize] {
                return;
            }
            *x = s;
            ac[s as usize] = true;
            ah += 1;
        });

        if ah == ag {
            let mut z: [[i32; 2]; 16] = Default::default();
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in 1..=ab + 1 {
                z[i as usize][0] = std::cmp::min(o[i as usize][0], u + o[i as usize - 1][0]);
                z[i as usize][1] = std::cmp::max(o[i as usize][1], u + o[i as usize - 1][1]);
            }
            let af = n(aa, &z, p, u, ab + 1, ac, ad);
            if let j::l(_) = af {
                continue;
            } else {
                return af;
            }
        }

        ac.iter_mut().for_each(|x| *x = false);
        u += 1;
    }

    j::l(p)
}