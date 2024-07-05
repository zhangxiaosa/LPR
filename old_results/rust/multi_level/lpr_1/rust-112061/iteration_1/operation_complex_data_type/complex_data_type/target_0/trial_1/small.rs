fn main() {
    // Primary data type variables
    let mut c: bool = false;
    let mut v8: u64 = 13978819448286864680;
    let mut v9: usize = 0;
    let mut v12: *mut u8;
    let mut d: isize;
    let mut v20: [u8; 8] = [0; 8];
    let mut e: [u8; 8] = [0; 8];
    let mut f: (bool, u8) = (false, 0);
    let mut v33: ([u128; 7], *mut i8, *mut bool);
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret: ([u128; 7], *mut i8, *mut bool) = ([0; 7], std::ptr::null_mut(), std::ptr::null_mut());
    unsafe {
        ret.2 = std::ptr::addr_of_mut!(c);
        'l0: loop {
            v12 = std::ptr::addr_of_mut!(v20[v9]);
            v20 = [197; 8];
            v9 = 2;
            'l1: loop {
                match *v12 {
                    197 => {
                        v33 = ret;
                        match v39.0 {
                            0 => {
                                'l2: loop {
                                    *v12 = 22;
                                    'l3: loop {
                                        e = v20;
                                        match v8 {
                                            13978819448286864680 => {
                                                v39.2.0 = [2262110980; 6];
                                                v8 = 13152832795211590855;
                                                v39.0 = 6;
                                                d = v33.2 as isize;
                                                v33.2 = std::ptr::addr_of_mut!(f.0);
                                                f.1 = *v12;
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
                                }
                            },
                            _ => return ret,
                        }
                    },
                    4 => {
                        v12 = std::ptr::addr_of_mut!(v20[v9]);
                    },
                    _ => return ret,
                }
            }
        }
    }
}