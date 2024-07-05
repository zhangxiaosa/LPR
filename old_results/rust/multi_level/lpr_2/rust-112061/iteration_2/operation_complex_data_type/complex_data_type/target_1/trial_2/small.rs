unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v12_ptr: *mut i8;
    let mut d;
    let mut v20_0: u8 = Default::default();
    let mut v20_1: u8 = Default::default();
    let mut v20_2: u8 = Default::default();
    let mut v20_3: u8 = Default::default();
    let mut v20_4: u8 = Default::default();
    let mut v20_5: u8 = Default::default();
    let mut v20_6: u8 = Default::default();
    let mut v20_7: u8 = Default::default();
    let mut e;
    let mut f_0: bool = Default::default();
    let mut f_1: u8 = Default::default();
    let mut v33_2;
    let mut v39_0: usize = 0;
    let mut v39_1_0: u128 = 0;
    let mut v39_1_1: u128 = 0;
    let mut v39_1_2: u128 = 0;
    let mut v39_1_3: u128 = 0;
    let mut v39_1_4: u128 = 0;
    let mut v39_1_5: u128 = 0;
    let mut v39_1_6: u128 = 0;
    let mut v39_2_0: u32 = 0;
    let mut v39_2_1: u32 = 0;
    let mut v39_2_2: u32 = 0;
    let mut v39_2_3: u32 = 0;
    let mut v39_2_4: u32 = 0;
    let mut v39_2_5: u32 = 0;
    let mut v39_3_0: u32 = 0;
    let mut v39_3_1: u32 = 0;
    let mut ret_0: u128 = 0;
    let mut ret_1: *mut i8 = std::ptr::null_mut();
    let mut ret_2: *mut bool = std::ptr::null_mut();
    ret_2 = &mut false;
    'l0: loop {
        v12_ptr = &mut v20_0 as *mut u8 as *mut i8;
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
            match *v12_ptr {
                197 => {
                    v33_2 = ret_2;
                    match v39_0 {
                        0 => 'l2: loop {
                            *v12_ptr = 22;
                            loop {
                                e = [v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7];
                                match v8 {
                                    13978819448286864680 => {
                                        v39_2_0 = 2262110980_u32;
                                        v39_2_1 = 2262110980_u32;
                                        v39_2_2 = 2262110980_u32;
                                        v39_2_3 = 2262110980_u32;
                                        v39_2_4 = 2262110980_u32;
                                        v39_2_5 = 2262110980_u32;
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        d = v33_2;
                                        v33_2 = &mut f_0;
                                        f_1 = *v12_ptr;
                                        *d = true;
                                        v20_0 = e[0];
                                        v20_1 = e[1];
                                        v20_2 = e[2];
                                        v20_3 = e[3];
                                        v20_4 = e[4];
                                        v20_5 = e[5];
                                        v20_6 = e[6];
                                        v20_7 = e[7];
                                        match v39_0 {
                                            6 => {
                                                println!("{:?}", (f_0, f_1));
                                            }
                                            0 => continue 'l2,
                                            _ => return (ret_0, ret_1, ret_2),
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        }
                        _ => return (ret_0, ret_1, ret_2),
                    }
                }
                4 => {
                    v12_ptr = &mut v20_1 as *mut u8 as *mut i8;
                }
                _ => return (ret_0, ret_1, ret_2),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}