extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let _46;
    let _88;
    let _31;
    let _33;
    let mut result = ptr::null_mut();
    let _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    'bb65: loop {
        _31 = ptr::addr_of_mut!((*ptr::addr_of_mut!(tup)).0 .0 .2);
        *_31 = isize::MIN;
        'bb66: loop {
            *ptr::addr_of_mut!(tup) = _95;
            _33 = ptr::addr_of_mut!(result);
            *_33 = ptr::addr_of_mut!(_46);
            println!("{}", *_31);
            return ptr::addr_of!(result);
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}