fn main() {
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    match n(7, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
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
    t = t.max(o[2 + 1][1] - o[2 + 1][0]);
    let mut u = t;
    let remaining_iterations = q % 4;
    let u_limit = q - remaining_iterations;
    while u < u_limit {
        // Unrolled loop iteration 1
        let mut af1 = true;
        // ... compute and update ad and ac arrays ...
        if af1 {
            // ... perform computations ...
            let af = n(aa, &z1, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah1 {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;

        // Unrolled loop iteration 2
        let mut af2 = true;
        // ... compute and update ad and ac arrays ...
        if af2 {
            // ... perform computations ...
            let af = n(aa, &z2, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah2 {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;

        // Unrolled loop iteration 3
        let mut af3 = true;
        // ... compute and update ad and ac arrays ...
        if af3 {
            // ... perform computations ...
            let af = n(aa, &z3, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah3 {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;

        // Unrolled loop iteration 4
        let mut af4 = true;
        // ... compute and update ad and ac arrays ...
        if af4 {
            // ... perform computations ...
            let af = n(aa, &z4, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah4 {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    while u < q {
        // Loop body for the remaining iterations
        // ... compute and update ad and ac arrays ...
        u += 1;
    }
    j::l(p)
}