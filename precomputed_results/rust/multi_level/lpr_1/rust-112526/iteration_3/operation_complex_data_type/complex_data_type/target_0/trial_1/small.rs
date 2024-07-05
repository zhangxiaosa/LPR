use core::ptr;

fn a() -> *const *mut usize {
    let mut _46: i32 = 0;
    let mut _47: i32 = 0;
    let mut _88: usize = 0;
    let mut _31: *mut f32 = ptr::null_mut();
    let mut _33: *mut f32 = ptr::null_mut();
    let mut _177: *mut usize = ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, f32) = (0, 0, 0, 0, 0.0);
    let mut tup: ((u64, u64, u8, u32, f32), bool) = ((0, 0, 0, 0, 0.0), false);
    let mut _95: ((u64, u64, u8, u32, f32), bool) = ((0, 0, 0, 0, 0.0), false);
    _31 = ptr::null_mut();
    let mut isize_min: isize = isize::MIN;

    'bb65: loop {
        _31 = ptr::null_mut();
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = ptr::null_mut();
        loop {
            tup = _95;
            isize_min = 0;
            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;

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
    let result = unsafe { a() };
}