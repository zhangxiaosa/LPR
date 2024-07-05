unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v20_0: u8 = Default::default();
    let mut v20_1: u8 = Default::default();
    let mut v20_2: u8 = Default::default();
    let mut v20_3: u8 = Default::default();
    let mut v20_4: u8 = Default::default();
    let mut v20_5: u8 = Default::default();
    let mut v20_6: u8 = Default::default();
    let mut v20_7: u8 = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33_2;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret = (0, std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut c;
    'l0: loop {
        let v12 = match v9 {
            0 => &mut v20_0 as *mut u8,
            1 => &mut v20_1 as *mut u8,
            2 => &mut v20_2 as *mut u8,
            3 => &mut v20_3 as *mut u8,
            4 => &mut v20_4 as *mut u8,
            5 => &mut v20_5 as *mut u8,
            6 => &mut v20_6 as *mut u8,
            7 => &mut v20_7 as *mut u8,
            _ => panic!("Index out of range: {}", v9),
        };
        v20_0 = 197_u8;
        v20_1 = 197_u8;
        v20_2 = 197_u8;
        v20_3 = 197_u8;
        v20_4 = 197_u8;
        v20_5 = 197_u8;
        v20_6 = 197_u8;
        v20_7 = 197_u8;
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680_u64;
                    v33_2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7);
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        let d = v33_2;
                                        v33_2 = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7) = e;
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
                    v12 = match v9 {
                        0 => &mut v20_0,
                        1 => &mut v20_1,
                        2 => &mut v20_2,
                        3 => &mut v20_3,
                        4 => &mut v20_4,
                        5 => &mut v20_5,
                        6 => &mut v20_6,
                        7 => &mut v20_7,
                        _ => panic!("Index out of range: {}", v9),
                    };
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