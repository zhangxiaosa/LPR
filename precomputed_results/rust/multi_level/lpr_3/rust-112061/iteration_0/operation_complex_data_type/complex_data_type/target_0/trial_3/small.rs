use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c: bool;
    let mut v8: u64;
    let mut v9: usize;
    let mut v12: *mut u8;
    let mut d: *mut bool;
    let mut v20: [u8; 8];
    let mut e: [u8; 8];
    let mut f: (bool, u8);
    let mut v33: ([u128; 7], *mut i8, *mut bool);
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]);
    let mut ret: ([u128; 7], *mut i8, *mut bool);
    ret.2 = &mut c as *mut bool;
    'l0: loop {
        v12 = &mut v20[v9] as *mut u8;
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197_u8 => {
                    v8 = 13978819448286864680_u64;
                    v33.2 = &mut ret.2 as *mut bool;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22_u8;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680_u64 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = &mut f.0 as *mut bool;
                                        f.1 = *v12 as u8;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                println!("{v}", v = f.1);
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        }
                        g => return ret,
                    }
                }
                4_u8 => {
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