use std::ptr;

unsafe fn b() -> ([i128; 7], i8, bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33_2_ptr;
    let mut v39: (usize, [i128; 7], ([u32; 6], usize, u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = &mut c;
    let mut v20_ptr;
    'l0: loop {
        v20_ptr = &mut v20[v9];
        v20 = [197_u8; 8];
        v9 = 2_usize;
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
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        let d = v33_2_ptr;
                                        v33_2_ptr = &mut f.0;
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
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
                    v20_ptr = &mut v20[v9];
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