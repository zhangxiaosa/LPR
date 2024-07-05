fn a(v: original_datatype) {
    println!("{{v}}");
}

fn b() -> ([u128; 7], *mut i8, *mut bool) {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20 = [original_datatype; 8];
    let mut e;
    let mut f = (original_datatype, original_datatype);
    let mut v33 = ([0; 7], ptr::null_mut(), ptr::null_mut());
    let mut v39 = (0, [0; 7], ([0; 6], 0, ptr::null_mut()), [0; 2]);
    let mut ret = ([0; 7], ptr::null_mut(), ptr::null_mut());
    ret.2 = ptr::addr_of_mut!(c);
    'l0: loop {
        v12 = ptr::addr_of_mut!(v20[v9]);
        v20 = [original_datatype; 8];
        v9 = 2;
        loop {
            match *v12 {
                197 => {
                    v8 = original_datatype;
                    v33.2 = ret.2;
                    match v39.0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                e = v20;
                                match v8 {
                                    13978819448286864680 => {
                                        v39.2 .0 = [original_datatype; 6];
                                        v8 = original_datatype;
                                        v39.0 = 6;
                                        d = v33.2;
                                        v33.2 = ptr::addr_of_mut!(f.0);
                                        f.1 = *v12;
                                        *d = original_datatype;
                                        v20 = e;
                                        match v39.0 {
                                            6 => {
                                                a(f.1);
                                            }
                                            0 => continue 'l2;
                                            _ => return ret;
                                        }
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        g => return ret,
                    }
                }
                4 => {
                    v12 = ptr::addr_of_mut!(v20[v9]);
                }
                g => return ret,
            }
        }
    }
}

fn main() {}
