fn b() -> ([u128; 7], i8, bool) {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut d;
    let mut e;
    let mut f: (bool, u8) = Default::default();
    let mut v33;
    let mut v39: (usize, [u128; 7], ([u32; 7], usize, *mut u32), [u32; 2]) = (0, [0; 7], ([0; 6], 0, std::ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], std::ptr::null_mut(), std::ptr::null_mut());
    ret.2 = &mut c;
    'l0: loop {
        v9 = 2_usize;
        loop {
            v33 = ret;
            v39.2 .0 = [2262110980_u32; 6];
            v8 = 13152832795211590855_u64;
            v39.0 = 7;
            d = v33.2;
            v33.2 = &mut f.0;
            f.1 = 22;
            *d = true;
            match v39.0 {
                7 => {
                    println!("{:?}", &f);
                }
                0 => continue 'l0,
                _ => return ret,
            }
        }
    }
}

fn main() {
    b();
}