use std::ptr;

fn a(v: u8) {
    // Original function implementation
    println!("{{v}}");
}

unsafe fn b() {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v20 = [0; 8];
    let mut f = (false, 0);
    let mut v33: ([u128; 7], *mut i8, *mut bool) = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let ret = ([0; 7], ptr::null_mut(), &mut c);
    let mut v20_ptr;

    'l0: loop {
        v20_ptr = ptr::addr_of_mut!(v20[v9]);
        v20 = [197_u8; 8];
        v9 = 2_usize;

        loop {
            match *v20_ptr {
                197 => {
                    v8 = 13978819448286864680_u64;
                    v33.2 = &mut c;
                    match 0 {
                        0 => 'l2: loop {
                            *v20_ptr = 22;

                            loop {
                                let e = v20;

                                match v8 {
                                    13978819448286864680 => {
                                        v8 = 13152832795211590855_u64;
                                        let d = &mut c;
                                        v33.2 = &mut f.0;
                                        f.1 = *v20_ptr;
                                        *d = true;

                                        v20 = e;

                                        match 6 {
                                            6 => {
                                                a(f.1);
                                            }
                                            0 => continue 'l2,
                                            _ => return ret,
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }    
                         }
                        _g => return ret,
                    }
                }
                4 => {
                    v20_ptr = ptr::addr_of_mut!(v20[v9]);
                }
                _g => return ret,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}