use std::ptr;

fn main() {
    let mut c = false;
    let mut v9 = 0;
    let mut v20: [u8; 8] = Default::default();
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);

    'l0: loop {
        let v20_ptr = &mut v20[v9] as *mut u8;
        v20 = [197_u8; 8];
        v9 = 2;

        loop {
            match *v20_ptr {
                197 => {
                    let ret = &mut v33;
                    ret.2 = &mut c;
                    let mut f: (bool, u8) = Default::default();
                    ret.2 = &mut f.0;
                    v33.2 = &mut f.0;

                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            let e = &v20;

                            match 13978819448286864680_u64 {
                                13978819448286864680 => {
                                    v39.2.0 = [2262110980_u32; 6];
                                    v39.0 = 6;
                                    let d = v33.2;
                                    v33.2 = &mut f.0;
                                    f.1 = *v20_ptr;
                                    *d = true;
                                    v20 = *e;

                                    match v39.0 {
                                        6 => {
                                            println!("{:?}", f.1);
                                        }
                                        0 => continue 'l2,
                                        _ => break 'l0,
                                    }
                                }
                                _ => break 'l0,
                            }
                        }
                        _ => break 'l0,
                    }
                }
                4 => {
                    v20_ptr = &mut v20[v9] as *mut u8;
                }
                _ => break 'l0,
            }
        }
    }
}