extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _33;
    let mut _90;
    let mut result = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _33 = ptr::addr_of_mut!(result);
    *_33 = ptr::addr_of_mut!(_46);
    println!("{_47}");
    return ptr::addr_of!(result);
}

fn main() {
    unsafe {
        a();
    }
}