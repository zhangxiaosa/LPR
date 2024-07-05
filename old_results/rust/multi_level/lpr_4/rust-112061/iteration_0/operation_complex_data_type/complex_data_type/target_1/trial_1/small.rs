use std::ptr;

fn a(v: u8) {
    println!("{{v}}");
}

fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8: u64;
    let mut v9: usize = 0;
    let mut v12: *mut u8;
    let mut d: *mut bool;
    let mut v20: [u8; 8] = [197; 8];
    let mut e: [u8; 8];
    let mut f: (bool, u8) = (false, 0);
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = &mut c;
    'l0: loop {
        v12 = &mut v20[v9];
        v20 = [197; 8];
        v9 = 2;
        loop {
            match *v12 {
                197 => {
                    v8 = 13978819448286864680;
                    v33.2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980; 6];
                                        v8 = 13152832795211590855;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                a(f.1);
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        g => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
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