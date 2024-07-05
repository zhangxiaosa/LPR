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
    // Removed v39: (usize, [u128; 7], ([u32; 6], usize, *mut u32), [u32; 2]) initialization
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    let v33_2 = ret.2;
                    // Removed match v39.0
                    'l2: loop {
                        *v12 = 22;
                        loop {
                            e = v20;
                            // Removed match v8
                            v39.2 .0 = [2_262_110_980_u32; 6];
                            v8 = 131_528_327_952_115_908_55_u64;
                            v39.0 = 6;
                            d = v33_2;
                            v33_2 = ptr::addr_of_mut!(f.0);
                            f.1 = *v12;
                            *d = true;
                            v20 = e;
                            // Removed match v39.0
                            println!("{:?}", f);
                        }
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