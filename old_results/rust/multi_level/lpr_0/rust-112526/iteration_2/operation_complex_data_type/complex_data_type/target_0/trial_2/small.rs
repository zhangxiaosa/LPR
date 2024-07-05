fn a() -> *mut i64 {
    let mut _46: i64;
    let mut _47: i64;
    let mut _88: usize;
    let mut _31: *mut i64;
    let mut _33: *mut *mut i64;
    let mut isize_min: isize;
    let mut _177: *mut *mut i64;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = &mut _44.0 .2;
    *_31 = 1;
    isize_min = -9223372036854775808;
    loop {
        let _90 = _31.wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            tup = _95;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            return _177;
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue,
            }
        }
    }
}

fn main() {
    a();
}