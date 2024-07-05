fn a() -> *const *mut f64 {
    let mut _16;
    _16 = 18215089233857363959_usize;

    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _ = ptr::addr_of_mut!(tup.0 .0 .2);
    _ = tup.wrapping_offset(isize::MIN);

    let mut _177 = ptr::null_mut();
    let _44: ((u64, u64, u8), u32, f32) = Default::default();

    'bb65: loop {
        let _ = _;

        loop {
            let _ = _;

            match _16 {
                18215089233857363959 => {
                    let _ = _

                    let _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!("{_47}");
                            return ptr::addr_of!(_177);
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65,
            }
        }
    }
}

fn main() {
    unsafe {
        a() as *const *mut f64;
    }
}