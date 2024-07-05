unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33_0: u128 = 0;
    let mut v33_1: *mut i8 = std::ptr::null_mut();
    let mut v33_2: *mut bool = std::ptr::null_mut();
    let mut ret = (0, std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut c as *mut bool;
    'l0: loop {
        v12 = &mut v20[v9] as *mut u8;
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680_u64;
                    v33_2 = ret.2;
                    match (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]) {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        ([2262110980_u32; 6], 6, v33_2) = ([2262110980_u32; 6], 6, v33_2);
                                        v8 = 13152832795211590855_u64;
                                        (6, true, v20) = (6, true, e);
                                        match 6 {
                                            6 => {
                                                println!("{:?}", (true, 22));
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
                    v12 = &mut v20[v9] as *mut u8;
                }
                g => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}