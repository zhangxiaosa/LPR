use std::ptr;

unsafe fn b() {
    let mut c = false;
    let mut v8 = 13978819448286864680_u64;
    let mut v9 = 0;
    let mut v20 = [197_u8; 8];
    let mut f = (false, 0);

    let ret_2 = &mut c;

    'l0: loop {
        let v20_ptr = &mut v20[v9];
        v9 = 2_usize;
        loop {
            match *v20_ptr {
                197 => {
                    let v33_2_ptr = ret_2;
                    'l2: loop {
                        *v20_ptr = 22;
                        loop {
                            let e = v20;
                            match v8 {
                                13978819448286864680 => {
                                    f.0 = true;
                                    f.1 = *v20_ptr;
                                    v20 = e;
                                    match v9 {
                                        6 => {
                                            println!("{:?}", f);
                                        }
                                        _ => return,
                                    }
                                }
                                _ => continue 'l0,
                            }
                        }
                    }
                }
                4 => {
                    v20_ptr = &mut v20[v9];
                }
                _ => return,
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}