extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _46 = 42;
    _88 = 18215089233857363959_usize;
    isize_min = isize::MIN;

    let tup_ptr = ptr::addr_of_mut!(_tup_0);
    _33 = ptr::addr_of_mut!(_177);

    *tup_ptr = _95;
    *_33 = ptr::addr_of_mut!(_46);
    println!("{_47}");
    return ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}
