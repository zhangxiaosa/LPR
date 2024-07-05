use std::ptr;

unsafe fn b() -> ([u32; 28], *mut i8, *mut bool, u8, u8, u8, u8, u8, u8, u8, u8) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;

    let mut v20_0: u8 = 0;
    let mut v20_1: u8 = 0;
    let mut v20_2: u8 = 0;
    let mut v20_3: u8 = 0;
    let mut v20_4: u8 = 0;
    let mut v20_5: u8 = 0;
    let mut v20_6: u8 = 0;
    let mut v20_7: u8 = 0;

    let mut f = (false, 0);
    let mut v33_2_ptr;
    let mut v39: (usize, [u32; 28], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 28], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret_0 = [0; 28];
    let mut ret_1: *mut i8 = ptr::null_mut();
    let mut ret_2: *mut bool = ptr::null_mut();
    ret_2 = ptr::addr_of_mut!(c);
    let mut v20_0_ptr;
    'l0: loop {
        v20_0_ptr = ptr::addr_of_mut!(v20_0);
        v20_0 = 197_u8;
        v9 = 2_usize;
        loop {
            match *v20_0_ptr {
                197 => {
                    v33_2_ptr = ret_2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_0_ptr = 22;
                            loop {
                                let e = v20_0;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        let d = v33_2_ptr;
                                        v33_2_ptr = ptr::addr_of_mut!(f.0);
                                        f.1 = *v20_0_ptr;
                                        *d = true;
                                        v20_0 = e;
                                        match v39.0 {
                                            6 => {
                                                println!("{:?}", f);
                                            }
                                            0 => continue 'l2,
                                            _ => return (ret_0, ret_1, ret_2, v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7),
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        }
                        _ => return (ret_0, ret_1, ret_2, v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7),
                    }
                }
                4 => {
                    v20_0_ptr = ptr::addr_of_mut!(v20_0);
                }
                _ => return (ret_0, ret_1, ret_2, v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7),
            }
        }
    }
}

fn main() {
    unsafe {
        let (_ret_0, _ret_1, _ret_2, _v20_0, _v20_1, _v20_2, _v20_3, _v20_4, _v20_5, _v20_6, _v20_7) = b();
    }
}