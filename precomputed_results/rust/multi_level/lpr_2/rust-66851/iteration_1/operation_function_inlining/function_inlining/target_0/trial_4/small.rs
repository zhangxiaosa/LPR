fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    
    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    let aa = 7;
    let o_inline = &o;
    let p_inline = F;
    let q_inline = F;
    let ab_inline = 0;
    let ac_inline = &mut ac;
    let ad_inline = &mut ad;
    let mut u = 0;
    let y = q_inline;
    for i in 1..=ab_inline {
        u = u.max(o_inline[i as usize][1] - o_inline[i as usize][0]);
    }
    while u < y {
        let mut af = true;
        let mut ah = 0;
        for i in 0..(1 << ab_inline) {
            let s = ad_inline[i] + u;
            if ac_inline[s as usize] {
                af = false;
                break;
            }
            ad_inline[(1 << ab_inline) + i] = s;
            ac_inline[s as usize] = true;
            ah += 1;
        }
        if af {
            let ab_2 = ab_inline + 2;
            let mut z: [[i32; 2]; 16] = Default::default();
            z[ab_2 as usize][0] = std::i32::MAX;
            for i in 1..=(ab_inline + 1) {
                z[i as usize][0] = o_inline[i as usize][0].min(u + o_inline[(i - 1) as usize][0]);
                z[i as usize][1] = o_inline[i as usize][1].max(u + o_inline[(i - 1) as usize][1]);
            }
            let r = format!(
                "{}{}{}{}{}{}{}",
                ad_inline[1 << ab_inline - 1],
                ad_inline[1 << ab_inline - 2],
                ad_inline[1 << ab_inline - 3],
                ad_inline[1 << ab_inline - 4],
                ad_inline[1 << ab_inline - 5],
                ad_inline[1 << ab_inline - 6],
                ad_inline[1 << ab_inline - 7]
            );
            let af = if let Ok(r) = r.parse() { J::K(r) } else { J::M };
            match af {
                J::K(_) | J::M => {
                    let result = af;
                    assert_eq!(result, Some(20_313_839_404_245));
                    return;
                },
                J::L(v) => {},
            }
        }
        for i in 0..ah {
            ac_inline[ad_inline[(1 << ab_inline) + i] as usize] = false;
        }
        u += 1;
    }
    let af = J::L(p_inline);
    match af {
        J::K(_) | J::M => {
            let result = af;
            assert_eq!(result, Some(20_313_839_404_245));
            return;
        },
        J::L(v) => {},
    }
}