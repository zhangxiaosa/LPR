use std::ptr;
fn a(v: u8) {
    println!("{v}")
}
unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut d: u64;
    let mut v9 = 0;
    let mut v12;
    let mut e;
    let mut v20: [u8; 8] = Default::default();
    let mut f;
    let mut k: (bool, u8) = Default::default();
    let mut l = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut g: (usize, [u128; 7], ([u32; 6], usize, *mut [u32; 6]), [u32; 2]) =
        (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = core::ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;
        'h: loop {
            match *v12 {
                197 => {
                    d = 13978819448286864680;
                    l = ret;
                    match g.0 {
                        0 => 'l2: loop {
                            *v12 = 2;
                            'i: loop {
                                f = v20;
                                match d {
                                    13978819448286864680 => {
                                        g.2 .0 = [080; 6];
                                        d = 5;
                                        g.0 = 6;
                                        e = l.2;
                                        l.2 = ptr::addr_of_mut!(k.0);
                                        k.1 = *v12;
                                        *e = true;
                                        v20 = f;
                                        match g.0 {
                                            6 => a(k.1),
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        j => return ret,
                    }
                }
                4 => v12 = ptr::addr_of_mut!(v20[v9]),
                j => return ret,
            }
        }
    }
}
fn main() {
    unsafe {
        b();
    }
}
