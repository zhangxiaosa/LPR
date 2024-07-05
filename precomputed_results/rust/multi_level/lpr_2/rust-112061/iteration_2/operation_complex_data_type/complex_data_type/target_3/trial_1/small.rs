unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut v8: u64 = 13978819448286864680_u64;
    let mut v9: usize = 0;
    let mut v12: *mut u8;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33_2;
    let mut v39_0: usize = 0;
    let mut v39_1: [u128; 7] = [0; 7];
    let mut v39_2_0: [u32; 6] = [0; 6];
    let mut v39_2_1: usize = 0;
    let mut v39_2_2: *mut u32 = std::ptr::null_mut();
    let mut v39_2 = (v39_2_0, v39_2_1, v39_2_2);
    let mut v39_3: [u32; 2] = [0; 2];
    let mut ret: (u128, *mut i8, *mut bool) = (0, std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut false;
    'l0: loop {
        v12 = &mut v20[v9] as *mut u8;
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v33_2 = ret.2;
                    match v39_0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39_2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        d = v33_2;
                                        v33_2 = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match v39_0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
                                            usize => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        usize => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
                }
                usize => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}