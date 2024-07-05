fn a() -> u64 {
    let mut _46: u64;
    let mut _88: u64;
    let mut _31: *mut u8;
    let mut _33: *mut *mut u8;
    let mut _177: *mut u8 = ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, u64) = Default::default();
    let mut tup: (u64, u64, u8, u32, u64, u8) = Default::default();
    _31 = ptr::addr_of_mut!(_44.2);
    *_31 = 1;
    let mut isize_min: i64 = i64::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0.0.2);
        _31 = _31.wrapping_offset(i64::MIN);
        _46 = 42;
        _88 = 18215089233857363959_u64;
        _31 = _31.wrapping_offset(isize_min as isize);
        loop {
            *ptr::addr_of_mut!(tup) = (_44.0, _44.1, _44.2, _44.3, _44.4, Default::default());
            isize_min = 0;
            let _47: u64 = *_31;
            match _88 {
                18215089233857363959_u64 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!("{_47}");
                            return _177 as u64;
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
    a();
}