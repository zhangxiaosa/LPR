fn b() -> ([u32; 28], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8: u64 = 13978819448286864680;
    let mut v9: u32 = 0;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut f: (bool, u32) = (false, 0);
    let mut v33_2_ptr: *mut bool;
    let mut v39_0: usize = 0;
    let mut v39_1: [u32; 28] = [0; 28];
    let mut v39_2_0: [u32; 6] = [0; 6];
    let mut v39_2_1: usize = 0;
    let mut v39_2_2: *mut u32 = std::ptr::null_mut();
    let mut v39_3: [u32; 2] = [0; 2];
    let mut ret_0: [u32; 28] = [0; 28];
    let mut ret_1: *mut i8 = std::ptr::null_mut();
    let mut ret_2: *mut bool = std::ptr::null_mut();
    ret_2 = &mut c;
    let mut v20_ptr: *mut u8;
    'l0: loop {
        v20_ptr = &mut v20[v9 as usize];
        v20 = [197_u8; 8];
        v9 = 2;
        loop {
            match *v20_ptr {
                197 => {
                    v33_2_ptr = ret_2;
                    match v39_0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39_2_0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        let d = v33_2_ptr;
                                        v33_2_ptr = &mut f.0;
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
                                        match v39_0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
                                            _ => return (ret_0, ret_1, ret_2),
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        _ => return (ret_0, ret_1, ret_2),
                    }
                }
                4 => {
                    v20_ptr = &mut v20[v9 as usize];
                }
                _ => return (ret_0, ret_1, ret_2),
            }
        }
    }
}

fn main() {
    b();
}