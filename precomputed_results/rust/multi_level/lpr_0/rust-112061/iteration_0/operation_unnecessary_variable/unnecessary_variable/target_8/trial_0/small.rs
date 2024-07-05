unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut ret = ([0; 7], std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = std::ptr::addr_of_mut!(c);
    'l0: loop {
        let v12 = std::ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    v8 = 139_788_194_482_868_646_80_u64;
                    match 0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    139_788_194_482_868_646_80 => {
                                        ([2_262_110_980_u32; 6], 0, std::ptr::null_mut());
                                        v8 = 131_528_327_952_115_908_55_u64;
                                        let d = std::ptr::addr_of_mut!(f.0);
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;
                                        match 6 {
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
                    v12 = std::ptr::addr_of_mut!(v20[v9]);
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