fn a() -> u64 {
    let mut _46: u64;
    let mut _88: u64;
    let mut _31: *mut u8;
    let mut _33: *mut *mut u8;
    let mut _177: *mut u8 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, u64) = Default::default();
    let mut tup: (((u64, u64, u8), u32, u64), u8) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2) as *mut u8;
    *_31 = 1;
    let mut isize_min: i64 = i64::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2) as *mut u8;
        _31 = _31.wrapping_offset(isize_min as isize) as *mut u8;
        _46 = 42;
        _88 = 18215089233857363959_u64;
        _31 = _31.wrapping_offset(isize_min as isize) as *mut u8;
        loop {
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0;
            let _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177) as *mut *mut u8;
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46) as *mut u8;
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