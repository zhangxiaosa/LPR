use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut v8 = 139_788_194_482_868_646_80_u64;
    let mut v9 = 0;
    let mut v12;
    let mut v20: [u8; 8] = Default::default();
    let mut f: (bool, u8) = Default::default(); // Target variable
    let mut v33_2;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());

    'loop_label_0: loop {
        v20 = [197_u8; 8];
        v9 = 2_usize;
        v12 = ptr::addr_of_mut!(v20[v9]);
        loop {
            match *v12 {
                197 => {
                    v33_2 = ret.2;
                    match v39.0 {
                        // Optimization: Constant propagation
                        0 => {
                            'loop_label_2: loop {
                                *v12 = 22;
                                v33_2 = ptr::addr_of_mut!(f.0);
                                *v33_2 = true;
                                match v39.0 {
                                    // Optimization: Constant propagation
                                    6 => {
                                        println!("{:?}", f); // Using target variable
                                    }
                                    0 => continue 'loop_label_2,
                                    _ => return ret,
                                }
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
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}