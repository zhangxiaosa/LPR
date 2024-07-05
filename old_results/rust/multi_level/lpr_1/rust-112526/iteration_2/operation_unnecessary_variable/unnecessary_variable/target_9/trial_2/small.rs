extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    *_44.0 .2 = 1;
    *_95.0 .0 .2 = *_44.0 .2;
    let _46 = 42;
    let _33 = &_46;
    println!("{_47}");
    ptr::addr_of!(_177)
}

fn main() {
    unsafe {
        a();
    }
}