unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut v9 = 0;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut ret = (0, std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut false;

    'l0: loop {
        let v12 = &mut v20[v9] as *mut u8;
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680_u64;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                let d = ret.2;
                                ret.2 = &mut f.0;
                                f.1 = 22_u8;
                                *d = true;
                                v20 = [197_u8; 8];
                                match v39.0 {
                                    6 => {
                                        println!("{:?}", f);
                                    }
                                    0 => continue 'l2,
                                    _ => return ret,
                                }
                            }
                        },
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
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