extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();

    let mut isize_min = isize::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(_44.0 .2);
        *_31 = 1;

        let mut isize_min = isize::MIN;
        'bb65: loop {
            _31 = _31.wrapping_offset(isize::MIN);
            _31 = _31.wrapping_offset(isize_min);

            loop {
                isize_min = 0;

                _177 = 0;
                _33 = ptr::addr_of_mut!(_177);

                *_33 = ptr::addr_of_mut!(42);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}