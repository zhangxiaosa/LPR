fn main() {
    const F: i32 = 1 << 12;
    fn n(aa: i32, o_min: &[i32; 16], o_max: &[i32; 16], p: i32, q: i32, ab: i32, ac: &mut [bool; 4096], ad: &mut [i32; 128]) -> u64 {
        if ab == aa {
            let r = format!(
                "{}{}{}{}{}{}{}",
                ad[1 << ab - 1],
                ad[1 << ab - 2],
                ad[1 << ab - 3],
                ad[1 << ab - 4],
                ad[1 << ab - 5],
                ad[1 << ab - 6],
                ad[1 << ab - 7]
            );
            return if let Ok(r) = r.parse() { u64::from(r) } else { 0 }; // Assuming conversion failure returns 0
        }
        let mut u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o_max[i as usize] - o_min[i as usize]);
        }
        while u < y {
            let mut af = true;
            let mut ah = 0;
            for i in 0..(1 << ab) {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[(1 << ab) + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }
            if af {
                let ab_2 = ab + 2;
                let mut z_min: [i32; 16] = Default::default();
                let mut z_max: [i32; 16] = Default::default();
                z_min[ab_2 as usize] = std::i32::MAX;
                for i in 1..=(ab + 1) {
                    z_min[i as usize] = o_min[i as usize].min(u + o_min[(i - 1) as usize]);
                    z_max[i as usize] = o_max[i as usize].max(u + o_max[(i - 1) as usize]);
                }
                let af = n(aa, &z_min, &z_max, p, u, ab + 1, ac, ad);
                match af {
                    Ok(r) => return r,
                    _ => {}
                }
            }
            for i in 0..ah {
                ac[ad[(1 << ab) + i] as usize] = false;
            }
            u += 1;
        }
        p as u64
    }
    let mut ac: [bool; 4096] = [false; 4096];
    let mut ad: [i32; 128] = [0; 128];
    let mut o_min: [i32; 16] = Default::default();
    let mut o_max: [i32; 16] = Default::default();
    o_min[1] = std::i32::MAX;
    let result = match n(7, &o_min, &o_max, F, F, 0, &mut ac, &mut ad) {
        Ok(r) => Some(r),
        _ => None
    };
    assert_eq!(result, Some(20_313_839_404_245));
}