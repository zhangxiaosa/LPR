extern crate core;

use core::ptr;

fn main() {
    unsafe {
        a();
    }
}

unsafe fn a() {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut usize;
    let mut _177: *mut usize;
    let mut _44: (u64, u64, u8, u32, f32);
    let mut tup: (u64, u64, u8, u32, f32, bool);
    let mut _95: (u64, u64, u8, u32, f32, bool);

    _16 = 0;
    isize_min = 0;
    _46 = 0;
    _47 = 0;
    _88 = 0;
    _31 = ptr::null_mut();
    _33 = ptr::null_mut();
    _177 = ptr::null_mut();
    _44 = (0, 0, 0, 0, 0.0);
    tup = (0, 0, 0, 0, 0.0, false);
    _95 = (0, 0, 0, 0, 0.0, false);

    _31 = &_44.4;
    *_31 = 1.0;
    isize_min = isize::MIN;

    'bb65: loop {
        _31 = _31.offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = 0;
        _31 = _31.offset(-isize_min);

        loop {
            ptr::write(&mut tup, _95);
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
                            return;
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