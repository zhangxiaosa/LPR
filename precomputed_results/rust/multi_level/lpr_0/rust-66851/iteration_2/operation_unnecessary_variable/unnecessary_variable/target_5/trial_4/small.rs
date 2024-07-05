fn n(
    aa: i32,
    o: &[[i32; 2]],
    p: i32,
    q: i32,
    ab: i32,
    ac: &mut [bool],
    ad_decomposed: &mut [i32],
) -> j {
    if ab == aa {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad_decomposed[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }
    let mut u = (o[2 + 1][1] - o[2 + 1][0]).max(0); // Propagated value of 't'
    while u < q {
        let mut af = true;
        let mut ah = 0;
        for i in 0..(1 << ab) {
            let s = ad_decomposed[i] + u;
            if ac[s as usize] {
                af = false;
                break;
            }
            ad_decomposed[(1 << ab) + i] = s;
            ac[s as usize] = true;
            ah += 1;
        }
        if af {
            let af = n(aa, o, p, u, ab + 1, ac, ad_decomposed);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah {
            ac[ad_decomposed[(1 << ab) + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}