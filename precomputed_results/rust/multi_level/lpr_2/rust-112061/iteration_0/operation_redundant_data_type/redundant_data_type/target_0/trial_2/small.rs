use std::ptr;

unsafe fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v9 = 0;

    let mut f: bool = Default::default();

    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);

    loop {
        match v9 {
            0 => {
                v9 = 2_usize;
                loop {
                    match v9 {
                        2 => {
                            let v12 = ptr::addr_of_mut!(ret.0[v9]);
                            ret.0 = [197_u128; 7];
                            match *v12 {
                                197 => {
                                    f = true;
                                    println!("{:?}", f);
                                    v9 = 6;
                                }
                                _ => return ret,
                            }
                        }
                        _ => return ret,
                    }
                }
            }
            _ => return ret,
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}