unsafe fn b() -> ([u32; 28], usize, usize) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33_2_ptr;
    let mut v39: (usize, [u32; 28], ([u32; 6], usize, usize), [u32; 2]) =
        (0, [0; 28], ([0; 6], 0, 0), [0; 2]);
    let mut ret = ([0; 28], 0, 0);
    ret.2 = &mut c as *mut bool as usize;
    'l0: loop {
        let v20_ptr = &mut v20[v9] as *mut u8 as usize;
        v20 = [197_u8; 8].into();
        v9 = 2;
        loop {
            match *v20_ptr {
                197 => {
                    let v33_2_ptr = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6].into();
                                        v8 = 13152832795211590855;
                                        v39.0 = 6;
                                        let d = v33_2_ptr;
                                        v33_2_ptr = &mut f.0 as *mut bool as usize;
                                        f.1 = *v20_ptr;
                                        *(d as *mut bool) = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                println!("{:?}", (f.0, f.1));
                                            }
                                            0 => continue 'l2,
                                            _ => return ret.into(),
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        _ => return ret.into(),
                    }
                }
                4 => {
                    v20_ptr = &mut v20[v9] as *mut u8 as usize;
                }
                _ => return ret.into(),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}