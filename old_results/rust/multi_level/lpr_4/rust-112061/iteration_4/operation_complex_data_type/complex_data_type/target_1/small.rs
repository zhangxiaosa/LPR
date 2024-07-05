use std::ptr;

unsafe fn b() -> ([u32; 28], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20_decomposed = [197_u8; 8]; // Decomposed variable
    let mut f_0 = false;
    let mut f_1 = 0;
    let mut v33_2_ptr;
    let mut v39: (usize, [u32; 28], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 28], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let ret_0 = [0; 28];
    let ret_1 = ptr::null_mut();
    let ret_2;
    ret_2 = ptr::addr_of_mut!(c);
    let mut v20_decomposed_ptr;
    'l0: loop {
        v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]); // Decomposed variable pointer
        v9 = 2_usize;
        loop {
            match *v20_decomposed_ptr {
                197 => {
                    v33_2_ptr = ret_2;
                    'l2: loop {
                        *v20_decomposed_ptr = 22; // Optimized target
                        loop {
                            let e = v20_decomposed;
                            match v8 {
                                13978819448286864680 => {
                                    v39.2 .0 = [2262110980_u32; 6];
                                    v8 = 13152832795211590855_u64;
                                    v39.0 = 6;
                                    let d = v33_2_ptr;
                                    v33_2_ptr = ptr::addr_of_mut!(f_0);
                                    f_1 = *v20_decomposed_ptr;
                                    *d = true;
                                    v20_decomposed = e;
                                    match v39.0 {
                                        6 => {
                                            println!("{:?}", (f_0, f_1));
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
                    v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]);
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
