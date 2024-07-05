use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8 = 139_788_194_482_868_646_80_u64;
    let mut v9 = 0;
    let mut v20_0: u8;
    let mut v20_1: u8;
    let mut v20_2: u8;
    let mut v20_3: u8;
    let mut v20_4: u8;
    let mut v20_5: u8;
    let mut v20_6: u8;
    let mut v20_7: u8;
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33_2;
    let mut v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        let mut v12;
        v12 = ptr::addr_of_mut!(v20_0);
        v20_0 = 197_u8;
        v20_1 = 197_u8;
        v20_2 = 197_u8;
        v20_3 = 197_u8;
        v20_4 = 197_u8;
        v20_5 = 197_u8;
        v20_6 = 197_u8;
        v20_7 = 197_u8;
        let mut d;
        loop {
            match *v12 {
                197 => {
                    v33_2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7);
                                match v8 {
                                    139_788_194_482_868_646_80 => {
                                        v39.2 .0 = [2_262_110_980_u32; 6];
                                        v8 = 131_528_327_952_115_908_55_u64;
                                        v39.0 = 6;
                                        d = v33_2;
                                        v33_2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v12;
                                        *d = true;
                                        (v20_0, v20_1, v20_2, v20_3, v20_4, v20_5, v20_6, v20_7) = e;
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
                        },
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = ptr::addr_of_mut!(v20_0);
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