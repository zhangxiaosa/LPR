fn b() -> [u128; 7] {
    let mut c = false;
    let mut v8;
    let mut v9 = 0;
    let mut v12;
    let mut d;
    let mut v20: [u8; 8] = Default::default();
    let mut e;
    let mut f: (bool, u8) = Default::default();

    let mut ret = [0; 7];
    let mut c_ptr = &mut c;

    loop {
        v12 = &mut v20[v9];
        v20 = [197_u8; 8];
        v9 = 2_usize;

        loop {
            match *v12 {
                197 => {
                    v8 = 139_788_194_482_868_646_80_u64;
                    c_ptr = &mut c;

                    match 0 {
                        0 => loop {
                            *v12 = 22;

                            loop {
                                e = v20;

                                match v8 {
                                    139_788_194_482_868_646_80 => {
                                        let mut v33 = [0; 7];
                                        v8 = 131_528_327_952_115_908_55_u64;
                                        let d = c_ptr;
                                        c_ptr = &mut f.0;
                                        f.1 = *v12;
                                        *d = true;
                                        v20 = e;

                                        match 6 {
                                            6 => {
                                                println!("{:?}", f.1 as i32);
                                            }
                                            0 => continue,
                                            _ => return ret,
                                        }
                                    }
                                    _ => return ret,
                                }
                            }
                        },
                        _ => return ret,
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
                }
                _ => return ret,
            }
        }
    }
}

fn main() {
    b();
}