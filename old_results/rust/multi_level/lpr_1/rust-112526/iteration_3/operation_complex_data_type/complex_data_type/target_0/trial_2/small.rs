extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46: isize;
    let mut _47: isize;
    let mut _88: usize;
    let mut _31: *mut u8;
    let mut _33: *mut *mut usize;
    let mut _177: *mut usize;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = ptr::null_mut();
    _46 = 42;
    _88 = 18215089233857363959_usize;

    let mut isize_min = isize::MIN;

    'bb65: loop {
        _31 = ptr::addr_of_mut!(_44.0 .2);
        *_31 = 1;

        _33 = ptr::addr_of_mut!(_177);
        *_33 = ptr::addr_of_mut!(_46);
        println!("{_47}");
        return ptr::addr_of!(_177);
    }
}

fn main() {
    unsafe {
        a();
    }
}