use std::ptr;

fn b() -> (bool, *mut bool) {
    let mut c: bool = false;
    let mut v8: u64 = 139_788_194_482_868_646_80_u64;
    let mut v9: usize = 0;
    let mut v20_decomposed: [u8; 8] = [197_u8; 8];
    let mut f_0: bool = false;
    let mut f_1: bool;
    let mut v33_2_ptr: *mut bool;
    let mut v39_0: usize = 0;
    let mut v39_1: [u32; 28] = [0; 28];
    let mut v39_2_0: [u32; 6] = [0; 6];
    let mut v39_2_1: usize = 0;
    let mut v39_2_2: *mut u32 = ptr::null_mut();
    let mut v39_3: [u32; 2] = [0; 2];
    let mut v20_decomposed_ptr: *mut u8;
    'l0: loop {
        v20_decomposed_ptr = &mut v20_decomposed[v9] as *mut u8;
        v9 = 2_usize;
        loop {
            match *((&mut *v20_decomposed_ptr) as *const u8) {
                197 => {
                    v33_2_ptr = &mut c as *mut bool;
                    'l2: loop {
                        *v20_decomposed_ptr = 22;
                        loop {
                            let e = v20_decomposed;
                            match v8 {
                                139_788_194_482_868_646_80 => {
                                    v39_2_0 = [2_262_110_980_u32; 6];
                                    v8 = 131_528_327_952_115_908_55_u64;
                                    v39_0 = 6;
                                    let d = v33_2_ptr;
                                    v33_2_ptr = &mut f_0 as *mut bool;
                                    f_1 = *v20_decomposed_ptr;
                                    *d = true;
                                    v20_decomposed = e;
                                    match v39_0 {
                                        6 => {
                                            println!("{:?}", f_1);
                                        }
                                        _ => continue 'l2,
                                    }
                                }
                                _ => continue 'l0,
                            }
                        }
                    }
                }
                4 => {
                    v20_decomposed_ptr = &mut v20_decomposed[v9] as *mut u8;
                }
                _ => return (false, ptr::null_mut()),
            }
        }
    }
}

fn main() {
    b();
}
