use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33_0: [u128; 7] = [0; 7];
    let mut v33_1: *mut i8 = ptr::null_mut();
    let mut v33_2: *mut bool = ptr::null_mut();
    let mut v39_0: usize = 0;
    let mut v39_1: [u128; 7] = [0; 7];
    let mut v39_2_0: [u32; 6] = [0; 6];
    let mut v39_2_1: usize = 0;
    let mut v39_2_2: *mut u32 = ptr::null_mut();
    let mut v39_3: [u32; 2] = [0; 2];
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
                    match v39_0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39_2_0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39_0 = 6;
                                        let d = v33_2;
                                        v33_2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
                                        match v39_0 {
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