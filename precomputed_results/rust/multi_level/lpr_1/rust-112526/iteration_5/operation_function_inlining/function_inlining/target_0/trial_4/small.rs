extern crate core;

use core::ptr;

fn a() -> *const *mut usize {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _44.0 .2 = 1;
    tup.0 .0 .2 = isize::MIN;

    *_33 = ptr::addr_of_mut!(_46);

    ptr::addr_of!(_177)
}

fn main() {
    let _ = a();
}
