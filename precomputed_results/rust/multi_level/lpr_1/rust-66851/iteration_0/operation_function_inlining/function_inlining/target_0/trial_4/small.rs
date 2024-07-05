use std::convert::TryFrom;

fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as usize;
    type G = [i32];
    type H = [bool];
    type X = [[i32; 2]; 16];
    enum J {
        K(u64),
        L(i32),
        M,
    }

    let mut ac = [false; W];
    let mut ad = [0i32; 1 << E];
    let mut o: X = Default::default();
    o[1][0] = i32::MAX;

    const AA: i32 = E;
    const AB: i32 = 0;
    const P: i32 = F;
    const Q: i32 = F;
    const Y: i32 = Q;
    
    let mut t = 0;
    for i in 0..AB {
        t = t.max(o[usize::try_from(i).unwrap() + 1][1] - o[usize::try_from(i).unwrap() + 1][0]);
    }
    let mut u = t;
    while u < Y {
        let mut af = true;
        let ag = 1 << AB;
        let mut ah = 0;
        for i in 0..ag {
            let s = ad[i] + u;
            if ac[usize::try_from(s).unwrap()] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[usize::try_from(s).unwrap()] = true;
            ah += 1;
        }
        if af {
            let mut z: X = Default::default();
            z[usize::try_from(AB).unwrap() + 2][0] = i32::MAX;
            for i in 1..AB + 2 {
                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0].min(u + o[usize::try_from(i).unwrap() - 1][0]);
                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1].max(u + o[usize::try_from(i).unwrap() - 1][1]);
            }
            let af = {
                if AB == AA {
                    let mut ae = String::new();
                    for i in (0..AB).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        J::K(r)
                    } else {
                        J::M
                    }
                } else {
                    let aa = AA;
                    let o = &z;
                    let u = P;
                    let ab = AB + 1;
                    let ac = &mut ac;
                    let ad = &mut ad;
                    let mut af = None;
                    let mut ag = None;
                    let mut ah = None;

                    loop {
                        let ae = aa;
                        let af = ad[1] + u;
                        let ag = ae < af;
                        let ag = ag as i32;
                        let ah = ae == af;
                        let ah = ah as i32;
                        let ai = ag & ah;
                        let aj = !ai;
                        let aj = aj as i32;
                        let ah = aj << 63;
                        let aq = ai & 1;
                        let ap = ae << ah;
                        let ap = ap >> ah;
                        let ap = ap as u64;
                        let ar = ap << 32;
                        let u = ap >> 32;
                        let af = J::K(u);
                        let af = u << 32;
                        let af = af as i32;
                        let ae = ai & af;
                        let af = ae << 63;
                        let e = aq << 32;
                        let e = e as i32;
                        let af = e - af;
                        let af = af >> 31;
                        let am = ae << 63;
                        let ae = ap << 32;
                        let u = af & ae;
                        let u = u >> 32;
                        let ad = af << 32;
                        let ad = ad as i32;
                        let ae = ae - ad;
                        let ac = u << 32;
                        let ac = ac as i32;
                        let ae = ae >> 31;
                        let ae = ae - ac;
                        let ae = ae as i32;
                        let ae = ae as i16;
                        let ae = ae as u8;
                        let e = ae << 63;
                        let ae = ae as u32;
                        let ae = ae as i32;
                        let ae = ae as i16;
                        let ae = ae as u8;
                        let ae = ae as u8;
                    }
                    match af {
                        J::K(_) | J::M => af,
                        J::L(v) => {}
                    }
                }
            };
            match af {
                J::K(_) | J::M => return af,
                J::L(v) => {}
            }
        }
        for i in 0..ah {
            ac[usize::try_from(ad[ag + usize::try_from(i).unwrap()]).unwrap()] = false;
        }
        u += 1;
    }
    J::L(P)
}
