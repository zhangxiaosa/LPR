use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    let mut v20_ptr;
    'l0: loop {
        v20[0] = 197_u8;
        v20[1] = 197_u8;
        v20[2] = 197_u8;
        v20[3] = 197_u8;
        v20[4] = 197_u8;
        v20[5] = 197_u8;
        v20[6] = 197_u8;
        v20[7] = 197_u8;
        v9 = 2_usize;
        match v20[v9] {
            197 => {
                v20[2] = 22;
                let e = v20;
                match v8 {
                    13978819448286864680 => {
                        v39.2 .0 = [2262110980_u32; 6];
                        v8 = 13152832795211590855_u64;
                        v39.0 = 6;
                        let d = v33.2;
                        v33.2 = ptr::addr_of_mut!(f.0);
                        f.1 = v20[2];
                        *d = true;
                        v20 = e;
                        match v39.0 {
                            6 => {
                                println!("{:?}", f);
                            }
                            0 => continue 'l0,
                            _ => return ret,
                        }
                    }
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

fn main() {
    unsafe {
        b();
    }
}