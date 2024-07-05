extern crate core;

fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: f32;
    let mut _88: usize;
    let mut _31: usize;
    let mut _33: *mut usize;
    let mut _177: *mut usize = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = (&mut _44.0.2) as *mut f32 as usize;
    *_31 = 1.0;
    isize_min = isize::MIN;

    'bb65: loop {
        _31 = (&mut tup.0.0.2) as *mut u8 as usize;
        _16 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);

        loop {
            tup = _95;
            isize_min = 0;
            _47 = *_31 as f32;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = (&mut _177) as *mut *mut usize;

                    match _46 {
                        42 => {
                            *_33 = (&mut _46) as *mut i32;
                            println!("{_47}");
                            return (&_177) as *const *mut usize as *const *mut i64;
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