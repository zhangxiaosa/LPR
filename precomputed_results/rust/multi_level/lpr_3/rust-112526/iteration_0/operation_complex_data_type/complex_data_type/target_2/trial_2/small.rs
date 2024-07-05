fn main() {
    unsafe {
        a();
    }
}

unsafe fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: u8;
    let mut _88: u64;
    let mut _31: *mut u8;
    let mut _33: *mut *mut i64;
    let mut _90: *mut u8;
    let mut _177: *mut i64 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = &mut _44.0 .2;
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65: loop {
        let tup_ptr = &mut tup;
        _31 = &mut (*tup_ptr).0 .0 .2;
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = &mut tup;
            *tup_ptr2 = _95;
            isize_min = _107;
            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;

                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return &*_177;
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