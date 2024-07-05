use std::ptr;

unsafe fn b() -> (*mut i8, *mut bool) {
    let mut c = false;
    let mut v9 = 0;
    let mut v20_decomposed = [197_u8; 8];
    let mut f_0 = false;
    let mut f_1;
    let mut v33_2_ptr;
    let mut v39: (usize, [u32; 28], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 28], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut v20_decomposed_ptr;

    'l0: loop {
        v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]);
        v9 = 2_usize;

        loop {
            match *v20_decomposed_ptr {
                197 => {
                    let v33_2_ptr = ptr::addr_of_mut!(c);

                    'l2: loop {
                        *v20_decomposed_ptr = 22;

                        loop {
                            let e = v20_decomposed;

                            v39.2 .0 = [2_262_110_980_u32; 6];
                            v39.0 = 6;

                            let mut d = v33_2_ptr;
                            v33_2_ptr = ptr::addr_of_mut!(f_0);
                            f_1 = *v20_decomposed_ptr;
                            *d = true;
                            v20_decomposed = e;

                            match v39.0 {
                                6 => {
                                    println!("{:?}", f_1);
                                }
                                _ => continue 'l2,
                            }
                        }
                    }
                }
                4 => {
                    v20_decomposed_ptr = ptr::addr_of_mut!(v20_decomposed[v9]);
                }
                _ => return (ptr::null_mut(), ptr::null_mut()),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}