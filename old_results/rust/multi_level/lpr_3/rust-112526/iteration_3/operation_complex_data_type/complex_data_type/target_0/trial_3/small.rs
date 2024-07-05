extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _31;
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;

    loop {
        let tup_ptr = ptr::addr_of_mut!(_44);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        let _33 = ptr::addr_of_mut!(_177);
        *_33 = ptr::addr_of_mut!(_44.1);

        println!("{:?}", *_33);
        return ptr::addr_of!(_177);
    }
}

fn main() {
    unsafe {
        a();
    }
}