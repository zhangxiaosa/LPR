fn main() {
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;

    if 0 == 7 {
        let mut ae = String::new();
        for i in (0..7).rev() {
            ae += &ad[1 << i].to_string();
        }
        match if let Ok(r) = String::from_utf8(ae)?.parse() { j::k(r) } else { j::m } {
            j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
            _ => panic!()
        };
    } else {
        let mut t = o[3][1] - o[3][0];
        let mut u = t;

        while u < 1 {
            let mut af = true;
            let ag = 1 << 0;
            let mut ah = 0;

            for i in 0..1 {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }

            if af {
                let mut z = [[0i32; 2]; 16];
                z[3][0] = std::i32::MAX;

                for i in 3..1 + 2 {
                    z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }

                if 1 == 7 {
                    let mut ae = String::new();
                    for i in (0..7).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    match if let Ok(r) = String::from_utf8(ae)?.parse() { j::k(r) } else { j::m } {
                        j::k(_) | j::m => return,
                        j::l(_) => {}
                    };
                } else {
                    let mut t = o[3][1] - o[3][0];
                    let mut u = t;

                    while u < 1 {
                        let mut af = true;
                        let ag = 1 << 1;
                        let mut ah = 0;

                        for i in 0..2 {
                            let s = ad[ag + i] + u;
                            if ac[s as usize] {
                                af = false;
                                break;
                            }
                            ad[ag << 1 | i] = s;
                            ac[s as usize] = true;
                            ah += 1;
                        }

                        if af {
                            let mut z = [[0i32; 2]; 16];
                            z[4][0] = std::i32::MAX;

                            for i in 4..2 + 2 {
                                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                            }

                            if 2 == 7 {
                                let mut ae = String::new();
                                for i in (0..7).rev() {
                                    ae += &ad[1 << i].to_string();
                                }
                                match if let Ok(r) = String::from_utf8(ae)?.parse() { j::k(r) } else { j::m } {
                                    j::k(_) | j::m => return,
                                    j::l(_) => {}
                                };
                            } else {
                                unimplemented!();
                            }
                        }

                        for i in 0..ah {
                            ac[ad[ag << 1 | i] as usize] = false;
                        }

                        u += 1;
                    }
                }
            }

            for i in 0..ah {
                ac[ad[ag + i] as usize] = false;
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