fn a(v: u8) {
    println!("{v}");
}

fn b() -> (u128, i8, bool) {
    let mut c = false;
    let mut v8: u128 = 0;
    let mut v9 = 0;
    let mut v12: &mut u8;
    let mut d: &mut bool;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33: (u128, i8, bool) = (0, 0, false);
    let mut v39: (usize, u128, (u32, usize, u32), [u32; 2]) =
        (0, 0, (0, 0, 0), [0; 2]);
    let mut ret: (u128, i8, bool) = (0, 0, false);
    ret.2 = &mut c;
    'l0: loop {
        v12 = &mut v20[v9];
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197_u8 => {
                    v8 = 13978819448286864680_u128;
                    v33.2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22_u8;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680_u128 => {
                                        v39.2 .0 = 2262110980_u32;
                                        v8 = 13152832795211590855_u128;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                a(f.1);
                                            }
                                            0 => continue 'l2,
                                            _ => unreachable!(),
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        }
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
                }
                _ => unreachable!(),
            }
        }
    }
}

fn main() {
    let _ = b();
}