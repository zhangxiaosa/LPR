unsafe fn b() -> (u128, *mut i8, *mut bool) {
    let mut v9 = 0;
    let mut v20: [u8; 8] = Default::default();

    'l0: loop {
        let v12 = &mut v20[v9] as *mut u8;
        v20 = [197_u8; 8];
        v9 = 2_usize;
        loop {
            match *v12 {
                197 => {
                    let v8 = 13978819448286864680_u64;
                    let v33_2;
                    match 0 {
                        0 => 'l2: loop {
                            *v12 = 22;
                            loop {
                                let e = v20;
                                match 13978819448286864680 {
                                    13978819448286864680 => {
                                        let d = &mut false;
                                        let v33_2 = &mut (false, 0_u8).0;
                                        (13978819448286864680, v33_2, v33_2);
                                        println!("{:?}", (false, *v12));
                                    }
                                    _ => continue 'l0,
                                }
                            }
                        },
                        usize => return (0, std::ptr::null_mut(), &mut false),
                    }
                }
                4 => {
                    v12 = &mut v20[v9];
                }
                usize => return (0, std::ptr::null_mut(), &mut false),
            }
        }
    }
}

fn main() {
    unsafe {
        b();
    }
}