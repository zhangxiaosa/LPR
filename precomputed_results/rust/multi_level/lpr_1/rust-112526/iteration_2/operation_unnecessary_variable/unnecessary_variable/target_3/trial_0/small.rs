extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    _44.0 .2 = 1;
    let mut isize_min = isize::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(0);
        _95.0 = (((0, 0, 1), 0, 0.0), false);
        _46 = 42;
        _31 = _31.wrapping_offset(0);
        loop {
            *ptr::addr_of_mut!(tup) = _95;
            isize_min = 0;
            _47 = *_31;
            continue 'bb65;
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}