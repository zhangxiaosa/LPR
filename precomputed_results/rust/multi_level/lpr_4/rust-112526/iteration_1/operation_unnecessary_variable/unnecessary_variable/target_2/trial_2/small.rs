extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut result = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    
    let _31 = ptr::addr_of_mut!(tup.0 .0 .2);
    *_31 = 1;

    let _33 = ptr::addr_of_mut!(result);
    *_33 = ptr::addr_of_mut!(42);

    println!("{_31}");

    return ptr::addr_of!(result);
}

fn main() {
    unsafe {
        a();
    }
}