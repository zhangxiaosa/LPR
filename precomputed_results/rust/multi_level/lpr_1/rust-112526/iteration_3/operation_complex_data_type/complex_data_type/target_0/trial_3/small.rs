extern crate core;

fn main() {
    let mut _46: i32;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: *mut u8;
    let mut _33: *mut *const *mut usize;
    let mut _177: *mut usize;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = core::ptr::null_mut();
    let mut isize_min = isize::MIN;
    'bb65: loop {
        _31 = core::ptr::null_mut();
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = core::ptr::null_mut();
        loop {
            tup = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = core::ptr::null_mut();
                    match _46 {
                        42 => {
                            _33 = core::ptr::null_mut();
                            println!("{_47}");
                            return core::ptr::null();
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