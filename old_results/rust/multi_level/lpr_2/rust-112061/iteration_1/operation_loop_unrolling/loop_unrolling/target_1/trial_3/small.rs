use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        'l2_0: loop {
            'l2_1: loop {
                let tmp_v12 = *v12;
                match tmp_v12 {
                    197 => {
                        v8 = 13978819448286864680_u64;
                        v33.2 = ret.2;
                        match v39.0 {
                            0 => {
                                *v12 = 22;
                                let mut i = 0;
                                'l2_2: loop {
                                    if i == 6 {
                                        println!("{:?}", f);
                                        break 'l2_2;
                                    }
                                    e = v20;
                                    match v8 {
                                        13978819448286864680 => {
                                            v39.2.0 = [2262110980_u32; 6];
                                            v8 = 13152832795211590855_u64;
                                            d = v33.2;
                                            v33.2 = ptr::addr_of_mut!(f.0);
                                            f.1 = *v12;
                                            *d = true;
                                            v20 = e;
                                        }
                                        _ => break 'l2_2,
                                    }
                                    i += 1;
                                }
                            }
                            _ => return ret,
                        }
                    }
                    4 => {
                        v12 = ptr::addr_of_mut!(v20[v9]);
                    }
                    _ => return ret,
                }
                break 'l2_1;
            }
            break 'l2_0;
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}