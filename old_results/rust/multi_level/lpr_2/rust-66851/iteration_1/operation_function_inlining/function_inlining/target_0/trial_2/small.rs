fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }

    const aa: i32 = 7;
    let o: [[i32; 2]; 16] = Default::default();
    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    o[1][0] = std::i32::MAX;

    let mut u = 0;
    let y = F;

    for i in 1..=0 {
        u = u.max(o[i as usize][1] - o[i as usize][0]);
    }

    while u < y {
        let mut af = true;
        let mut ah = 0;
        for i in 0..(1 << 0) {
            let s = ad[i] + u;
            if ac[s as usize] {
                af = false;
                break;
            }
            ad[(1 << 0) + i] = s;
            ac[s as usize] = true;
            ah += 1;
        }

        if af {
            let ab_2 = 0 + 2;
            let mut z: [[i32; 2]; 16] = Default::default();
            z[ab_2 as usize][0] = std::i32::MAX;
            for i in 1..=(0 + 1) {
                z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }

            match if 0 == aa {
                let r = format!(
                    "{}{}{}{}{}{}{}",
                    ad[1 << 0 - 1],
                    ad[1 << 0 - 2],
                    ad[1 << 0 - 3],
                    ad[1 << 0 - 4],
                    ad[1 << 0 - 5],
                    ad[1 << 0 - 6],
                    ad[1 << 0 - 7]
                );
                if let Ok(r) = r.parse() {
                    J::K(r)
                } else {
                    J::M
                }
            } else if 0 != aa {
                n(aa, &z, F, u, 0 + 1, ac, ad)
            } else {
                J::L(F)
            } {
                J::K(_) | J::M => {
                    return if 0 == aa {
                        let r = format!(
                            "{}{}{}{}{}{}{}",
                            ad[1 << 0 - 1],
                            ad[1 << 0 - 2],
                            ad[1 << 0 - 3],
                            ad[1 << 0 - 4],
                            ad[1 << 0 - 5],
                            ad[1 << 0 - 6],
                            ad[1 << 0 - 7]
                        );
                        if let Ok(r) = r.parse() {
                            J::K(r)
                        } else {
                            J::M
                        }
                    } else if 0 != aa {
                        n(aa, &z, F, u, 0 + 1, ac, ad)
                    } else {
                        J::L(F)
                    };
                }
                J::L(v) => {}
            }
        }

        for i in 0..ah {
            ac[ad[(1 << 0) + i] as usize] = false;
        }

        u += 1;
    }

    match if 0 == aa {
        let r = format!(
            "{}{}{}{}{}{}{}",
            ad[1 << 0 - 1],
            ad[1 << 0 - 2],
            ad[1 << 0 - 3],
            ad[1 << 0 - 4],
            ad[1 << 0 - 5],
            ad[1 << 0 - 6],
            ad[1 << 0 - 7]
        );
        if let Ok(r) = r.parse() {
            J::K(r)
        } else {
            J::M
        }
    } else if 0 != aa {
        n(aa, &o, F, F, 0, &mut ac, &mut ad)
    } else {
        J::L(F)
    } {
        J::K(s) => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20_313_839_404_245));
}