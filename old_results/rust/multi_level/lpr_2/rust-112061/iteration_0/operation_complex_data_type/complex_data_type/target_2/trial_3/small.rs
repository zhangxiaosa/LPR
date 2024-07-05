fn b(v39_target: &mut (usize, [u128; 7], ([u32; 6], usize, u32), [u32; 2])) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: u64 = 0;
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut ret = ([0; 7], 0 as *mut i8, 0 as *mut bool);
    ret.2 = &mut c;
    'l0: loop {
        v12 = &mut v20;
        v20 = 197_u64;
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680_u64;
                    ret.2 = &mut c;
                    match v39_target.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39_target.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_target.0 = 6;
                                        d = ret.2;
                                        ret.2 = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match v39_target.0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
                                            _ => return,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        _ => return,
                    }
                }
                4 => {
                    v12 = &mut v20;
                }
                _ => return,
            }
        }
    }
}

fn main() {
    let mut v39_target: (usize, [u128; 7], ([u32; 6], usize, u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0_usize, 0), [0; 2]);
    b(&mut v39_target);
}