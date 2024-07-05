use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20_0;
    let mut v20_1;
    let mut v20_2;
    let mut v20_3;
    let mut v20_4;
    let mut v20_5;
    let mut v20_6;
    let mut v20_7;
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20_0);
        v20_0 = 197_u8;
        v20_1 = 197_u8;
        v20_2 = 197_u8;
        v20_3 = 197_u8;
        v20_4 = 197_u8;
        v20_5 = 197_u8;
        v20_6 = 197_u8;
        v20_7 = 197_u8;
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    ret.2 = ptr::addr_of_mut!(c);
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20_0;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        d = ret.2;
                                        ret.2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v12;
                                        *d = true;
                                        v20_0 = e;
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
                        },
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = ptr::addr_of_mut!(v20_0);
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