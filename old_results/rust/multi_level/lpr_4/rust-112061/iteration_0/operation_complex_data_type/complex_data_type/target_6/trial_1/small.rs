use std::ptr;

fn a(v: u8) {
    println!("{v}");
}

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v0: u8;
    let mut v1: u8;
    let mut v2: u8;
    let mut v3: u8;
    let mut v4: u8;
    let mut v5: u8;
    let mut v6: u8;
    let mut v7: u8;
    let mut f: (bool, u8) = Default::default();
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    let mut v20_ptr: *mut u8;
    'l0: loop {
        v20_ptr = ptr::addr_of_mut!(v20[v9]);
        v0 = v20[0];
        v1 = v20[1];
        v2 = v20[2];
        v3 = v20[3];
        v4 = v20[4];
        v5 = v20[5];
        v6 = v20[6];
        v7 = v20[7];
        v9 = 2_usize;
        loop {
            match *v20_ptr {
                197 => {
                    v8 = 13978819448286864680_u64;
                    v33.2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e: [u8; 8] = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        let d = v33.2;
                                        v33.2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v20_ptr;
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
                    v20_ptr = ptr::addr_of_mut!(v20[v9]);
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