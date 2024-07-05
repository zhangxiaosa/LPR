fn b() -> ([u128; 7], *mut i8) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut v33;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], std::ptr::null_mut());
    ret.2 = &mut c;
    'l0: loop {
        v12 = &mut v20[v9];
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v33 = ret;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = &mut c.0;
                                        c.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                println!("{:?}", (c.0, c.1));
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        g => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
                }
                g => return ret,
            }
        }
    }
}

fn main() {
    b();
}
