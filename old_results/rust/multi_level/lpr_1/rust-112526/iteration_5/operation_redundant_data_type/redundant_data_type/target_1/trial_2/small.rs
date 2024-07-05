fn a() -> *const *mut f32 {
    let mut _46;
    let mut _88: f32;
    let mut _31: f32;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: (f32, u32, f32) = Default::default();
    let mut tup: ((f32, u32, f32), u8) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1.0;
    let mut isize_min: f32 = isize::MIN.into();
    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(f32::from(isize::MIN));
        _46 = 42;
        _88 = 18215089233857363959.0;
        _31 = _31.wrapping_offset(isize_min);
        loop {
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0.0;
            let _47 = *_31;
            match _88 as usize {
                18215089233857363959 => {
                    _88 = 0.0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46 as usize);
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
        a();
    }
}