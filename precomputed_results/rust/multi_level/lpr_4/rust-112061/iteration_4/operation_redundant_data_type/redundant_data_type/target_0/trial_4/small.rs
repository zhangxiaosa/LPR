use std::ptr;

unsafe fn b() -> ([u32; 28], *mut i8, *mut bool) {
    let mut c: bool = false;
    let mut v8: u64 = 13978819448286864680_u64;
    let mut v9: usize = 0;
    let mut v20: [u8; 8] = [197_u8; 8];
    let mut f: (bool, u8) = (false, 0);
    let mut v33_2_ptr: *mut i8;
    let mut v39: ([u32; 28], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 28], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let ret_0: [u32; 28] = [0; 28];
    let ret_1: *mut i8 = ptr::null_mut();
    let ret_2: *mut bool;
    ret_2 = ptr::addr_of_mut!(c);
    let mut v20_ptr: *mut u8;
    'l0: loop {
        v20_ptr = ptr::addr_of_mut!(v20[v9]);
        v9 = 2_usize;
        loop {
            match *v20_ptr {
                197 => {
                    v33_2_ptr = ret_2;
                    'l2: loop {
                        *v20_ptr = 22;
                        loop {
                            let e = v20;
                            match v8 {
                                13978819448286864680 => {
                                    v39.1 .0 = [2262110980_u32; 6];
                                    v8 = 13152832795211590855_u64;
                                    v39.0 = 6;
                                    let d = v33_2_ptr;
                                    v33_2_ptr = ptr::addr_of_mut!(f.0);
                                    f.1 = *v20_ptr;
                                    *d = true;
                                    v20 = e;
                                    match v39.0 {
                                        6 => {
                                            println!("{:?}", f);
                                        }
                                        0 => continue 'l2,
                                        _ => return (ret_0, ret_1, ret_2),
                                    }
                                }
                                _ => continue 'l0,
                            }
                        }
                    }
                }
                4 => {
                    v20_ptr = ptr::addr_of_mut!(v20[v9]);
                }
                _ => return (ret_0, ret_1, ret_2),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}