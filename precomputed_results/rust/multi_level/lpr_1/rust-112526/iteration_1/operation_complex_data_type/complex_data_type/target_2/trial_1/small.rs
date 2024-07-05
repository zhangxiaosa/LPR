fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: u8;
    let mut _88: usize;
    let mut _31: &mut f32;
    let mut _33: &mut *mut i32;
    let mut _90: *const *mut i32;
    let mut _177: *mut i32 = std::ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, f32) = Default::default();
    let mut _95: (u64, u64, u8, u32, f32, bool) = Default::default();
    _31 = &mut _44.4;
    *_31 = 1;
    isize_min = isize::min_value();
    'bb65: loop {
        let _31 = &mut _95.0 .0 .2;
        _16 = usize::MAX;
        _90 = _31.wrapping_offset(isize::min_value());
        _95.0 = _44;
        _46 = 42;
        _88 = usize::MAX;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let _tup_ptr2 = &mut _95.0;
            *_tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                usize::MAX => {
                    _88 = 0;
                    let _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return &_177;
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