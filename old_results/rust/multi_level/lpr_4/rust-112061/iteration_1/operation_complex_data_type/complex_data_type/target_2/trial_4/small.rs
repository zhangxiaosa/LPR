use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c: bool = false;
    let mut v8: u64 = 13978819448286864680_u64;
    let mut v9: usize = 0;
    let mut v20: [u8; 8] = [0; 8];
    let mut f: (bool, u8) = (false, 0);
    let mut v33_0: u128 = 0;
    let mut v33_1: u128 = 0;
    let mut v33_2: u128 = 0;
    let mut v33_3: u128 = 0;
    let mut v33_4: u128 = 0;
    let mut v33_5: u128 = 0;
    let mut v33_6: u128 = 0;
    let mut v33_7: *mut i8 = ptr::null_mut();
    let mut v33_8: *mut bool = ptr::null_mut();
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    let mut v20_ptr;
    'l0: loop {
        v20_ptr = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v20_ptr {
                197 => {
                    v33_2 = ret.2;
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
                                        let d = v33_2;
                                        v33_2 = ptr::addr_of_mut!(f.0);
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
                    v20_ptr = ptr::addr_of_mut!(v20[v9]);
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