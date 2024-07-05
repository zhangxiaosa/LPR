extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _46 = 42;
    let _47;
    
    let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
    *_tup_ptr2 = _95;
    let _33 = ptr::addr_of_mut!(_177);
    *_33 = ptr::addr_of_mut!(_46);
    println!("{_47}");
    return ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}