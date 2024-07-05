extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MAX);
        _95.0 = _44;
        _46 = 42;
        _31 = _31.wrapping_offset(isize::MAX);
        loop {
            *ptr::addr_of_mut!(tup) = _95;
            _47 = *_31;
            match _88 {
                usize::MAX => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            _177 = &_46 as *mut i64;
                            println!("{_47}");
                            return _177 as *const *mut i64;
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