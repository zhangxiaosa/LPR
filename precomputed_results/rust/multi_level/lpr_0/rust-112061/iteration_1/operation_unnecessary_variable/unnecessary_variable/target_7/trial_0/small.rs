use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 139_788_194_482_868_646_80_u64;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33_2;
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v33_2 = ret.2;
                    match 6 { // Optimized: v39.0 constant propagation
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match 139_788_194_482_868_646_80 { // Optimized: v8 constant propagation
                                    139_788_194_482_868_646_80 => {
                                        d = v33_2;
                                        v33_2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v12; // Optimized: f.1 copy propagation
                                        *d = true;
                                        v20 = e;
                                        match 6 { // Optimized: v39.0 constant propagation
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