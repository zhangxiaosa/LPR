use std::ptr;

fn main() {
    let mut c: bool = false;
    let mut v8: u64 = 13978819448286864680_u64;
    let mut v9: usize = 0;
    let mut v20: [u8; 8] = [0; 8];
    let mut f: (bool, u8) = (false, 0);
    let mut v33_data: [u128; 7] = [0; 7];
    let mut v33_ptr_i8: *mut i8 = ptr::null_mut();
    let mut v33_ptr_bool: *mut bool = ptr::null_mut();
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = &mut c;
    let mut v20_ptr;
    'l0: loop {
        v20_ptr = &mut v20[v9];
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v20_ptr {
                197 => {
                    v33_ptr_bool = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;
                            loop {
                                let e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [2262110980_u32; 6];
                                        v8 = 13152832795211590855_u64;
                                        v39.0 = 6;
                                        let d = v33_ptr_bool;
                                        v33_ptr_bool = &mut f.0;
                                        f.1 = *v20_ptr;
                                        *d = true;
                                        v20 = e;
                                        match v39.0 {
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
                        }
                        _ => return ret,
                    }
                }
                4 => {
                    v20_ptr = &mut v20[v9];
                }
                _ => return ret,
            }
        }
    }
}