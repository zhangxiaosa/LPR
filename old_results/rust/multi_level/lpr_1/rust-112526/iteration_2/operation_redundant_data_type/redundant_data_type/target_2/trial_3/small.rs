extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut f32 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = &mut _44.0 .2;
    *_31 = 1.0;
    isize_min = f32::MIN;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2;
        _16 = <<Replace with desired value>>;
        _31 = _31.wrapping_offset(f32::MIN as isize);
        _95.0 = _44.0;
        _46 = 42;
        _88 = <<Replace with desired value>>;
        _31 = _31.wrapping_offset(isize_min as isize);
        loop {
            *(&mut tup) = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                <<Replace with desired value>> => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{}", _47);
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