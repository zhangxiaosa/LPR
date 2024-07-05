use std::ptr;

unsafe fn b() -> ([u32; 28], *mut i8, *mut bool, [u8; 8], usize, [u32; 6], usize, *mut u32, [u32; 2]) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20_decomposed_0 = 197_u8;
    let mut v20_decomposed_1 = 197_u8;
    let mut v20_decomposed_2 = 197_u8;
    let mut v20_decomposed_3 = 197_u8;
    let mut v20_decomposed_4 = 197_u8;
    let mut v20_decomposed_5 = 197_u8;
    let mut v20_decomposed_6 = 197_u8;
    let mut v20_decomposed_7 = 197_u8;
    let mut f_0 = false;
    let mut f_1 = 0;
    let mut v33_2_ptr;
    let mut v39_0 = 0_usize;
    let mut v39_1 = [0_u32; 28];
    let mut v39_2_0 = [0_u32; 6];
    let mut v39_2_1: usize = 0;
    let mut v39_2_2 = ptr::null_mut();
    let mut v39_3 = [0_u32; 2];
    let mut ret_0 = [0_u32; 28];
    let mut ret_1 = ptr::null_mut();
    let mut ret_2: *mut bool;
    ret_2 = ptr::addr_of_mut!(c);
    let mut v20_decomposed_ptr;
    'l0: loop {
        v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed_0);
        v9 = 2_usize;
        loop {
            match *v20_decomposed_ptr {
                197 => {
                    v33_2_ptr = ret_2;
                    'l2: loop {
                        *v20_decomposed_ptr = 22;
                        loop {
                            let e = [v20_decomposed_0, v20_decomposed_1, v20_decomposed_2, v20_decomposed_3, v20_decomposed_4, v20_decomposed_5, v20_decomposed_6, v20_decomposed_7];
                            match v8 {
                                13978819448286864680 => {
                                    v39_2_0 = [2262110980_u32; 6];
                                    v8 = 13152832795211590855_u64;
                                    v39_0 = 6;
                                    let d = v33_2_ptr;
                                    v33_2_ptr = ptr::addr_of_mut!(f_0);
                                    f_1 = *v20_decomposed_ptr;
                                    *d = true;
                                    (v20_decomposed_0, v20_decomposed_1, v20_decomposed_2, v20_decomposed_3, v20_decomposed_4, v20_decomposed_5, v20_decomposed_6, v20_decomposed_7) = e;
                                    match v39_0 {
                                        6 => {
                                            println!("{:?}", (f_0, f_1));
                                        }
                                        0 => continue 'l2,
                                        _ => return (ret_0, ret_1, ret_2, v20_decomposed_0, v20_decomposed_1, v20_decomposed_2, v20_decomposed_3, v20_decomposed_4, v20_decomposed_5, v20_decomposed_6, v20_decomposed_7, v39_0, v39_1, v39_2_0, v39_2_1, v39_2_2, v39_3),
                                    }
                                }
                                _ => continue 'l0,
                            }
                        }
                    }
                }
                4 => {
                    v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed_0);
                }
                _ => return (ret_0, ret_1, ret_2, v20_decomposed_0, v20_decomposed_1, v20_decomposed_2, v20_decomposed_3, v20_decomposed_4, v20_decomposed_5, v20_decomposed_6, v20_decomposed_7, v39_0, v39_1, v39_2_0, v39_2_1, v39_2_2, v39_3),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}