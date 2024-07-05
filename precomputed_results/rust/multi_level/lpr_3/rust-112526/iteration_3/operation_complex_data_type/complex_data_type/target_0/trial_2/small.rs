extern crate core;

fn a() -> *const *mut i64 {
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: u32;
    let mut _88: usize;
    let mut _31: *mut u8;
    let mut _33: *mut *mut i64;
    let mut _90: *mut u8;
    let mut _177: *const *mut i64 = core::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = ((0, 0, 0), 0, 0.0);
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
    let mut _95: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);

    _31 = &mut _44.0.2 as *mut f32 as *mut u8;
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = (&mut _tup_0) as *mut (((u64, u64, u8), u32, f32), bool);
        _31 = &mut (*tup_ptr).0.0.2 as *mut f32 as *mut u8;
        _90 = _31.wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = (&mut _tup_0) as *mut (((u64, u64, u8), u32, f32), bool);
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177 as *mut *const *mut i64;

                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{}_47", _47);
                            return &_177;
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65_0,
            }
        }
    }
}

fn main() {
    let _ = unsafe {
        a();
    };
}