unsafe fn b() -> (u128, [u8; 8], *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33: (u128, *mut i8, *mut bool) = (0, std::ptr::null_mut(), std::ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret = (0, std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut c as *mut bool;
    'l0: loop {
        v12 = v20.as_mut_ptr().add(v9);
        v20.copy_from_slice(&[197_u8; 8]);
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680_u64;
                    v33.2 = ret.2 as *mut bool;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20.as_mut();
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0.copy_from_slice(&[2262110980_u32; 6]);
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = &mut f.0 as *mut bool;
                                        f.1 = *v12;
                                        *d = true;
                                        v20.copy_from_slice(e);
                                        match v39.0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = v20.as_mut_ptr().add(v9);
                }
                _ => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}