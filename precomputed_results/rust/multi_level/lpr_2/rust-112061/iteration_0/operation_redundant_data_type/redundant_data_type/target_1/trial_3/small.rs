unsafe fn b() -> ([T; 7], *mut T, *mut T) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [T; 8] = Default::default();
    let mut e;
    let mut f: (T1, T2) = Default::default();
    let mut v33: ([T; 7], *mut T, *mut T) = ([Default::default(); 7], ptr::null_mut(), ptr::null_mut());
    let mut v39: (usize, [T; 7], ([U; 6], usize, *mut U), [U; 2]) =
        (0, [Default::default(); 7], ([Default::default(); 6], 0, ptr::null_mut()), [Default::default(); 2]);
    let mut ret = ([Default::default(); 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20[v9]);
        v20 = [Default::default(); 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                Default::default() => {
                    v8 = Default::default();
                    v33.2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = Default::default();
                            loop {
                                e = v20;
                                match v8 {
                                    Default::default() => {
                                        v39.2 .0 = [Default::default(); 6];
                                        v8 = Default::default();
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v12;
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
                        },
                        g => return ret,
                    }
                }
                Default::default() => {
                    v12 = ptr::addr_of_mut!(v20[v9]);
                }
                g => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}