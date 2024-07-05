use std::ptr;

unsafe fn b() -> ((), *mut bool) {
    let mut c = false;
    let ret = ((), ptr::addr_of_mut!(c));
    ret.1 = ptr::addr_of_mut!(c);
    'l0: loop {
        match *ret.1 {
            197 => {
                match v39.0 {
                    0 => 'l2: loop {
                        *ret.1 = 22;
                        match v8 {
                            13978819448286864680 => {
                                v8 = 13152832795211590855_u64;
                                d = ptr::addr_of_mut!(f.0);
                                f.1 = *ret.1;
                                *d = true;
                                match v39.0 {
                                    6 => {
                                        println!("{:?}", f);
                                    }
                                    0 => continue 'l2,
                                    _ => return (),
                                }
                            }
                            _ => continue 'l0,
                        }
                    },
                    _ => return (),
                }
            }
            4 => {
                ret.1 = ptr::addr_of_mut!(v20[v9]);
            }
            _ => return (),
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}