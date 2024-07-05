unsafe fn b() -> ([u128; 7], *mut u8, bool) {
    let mut c = false;
    let mut v8: u64 = 13978819448286864680;
    let mut v9: u64 = 0;
    let mut v20: [u8; 8] = [0; 8];
    let mut f: (bool, u64) = (false, 0);
    let mut v33_2_ptr: *mut bool;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret: ([u128; 7], *mut u8, bool) = ([0; 7], std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut c;
    let mut v20_ptr: *mut u8;
    'l0: loop {
        v20_ptr = &mut v20[v9 as usize];
        v20 = [197; 8];
        v9 = 2;
        loop {
            match *v20_ptr {
                197 => {
                    v33_2_ptr = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980; 6];
                                        v8 = 13152832795211590855;
                                        v39.0 = 6;
                                        let d = v33_2_ptr;
                                        v33_2_ptr = &mut f.0;
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                println!("{:?}", (f.0, f.1));
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
                    v20_ptr = &mut v20[v9 as usize];
                }
                _ => return ret,
            }
        }
    }
}

fn main() {
    b();
}