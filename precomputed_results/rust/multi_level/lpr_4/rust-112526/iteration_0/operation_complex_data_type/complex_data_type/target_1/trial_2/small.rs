extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let _107: i32 = 0;
    let mut _47: i8;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i32;
    let mut _90: *mut f32;
    let mut result: *mut *mut i64 = std::ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut tup_0_0_2: u8 = 0;
    let mut tup_0_1: u32 = 0;
    let mut tup_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    let mut _95_0_0_2: u8 = 0;
    let mut _95_0_1: u32 = 0;
    let mut _95_0_2: f32 = 0.0;
    let mut _95_1: bool = false;

    _31 = ptr::addr_of_mut!(_44_0_2);
    *_31 = 1;
    isize_min = isize::MIN;
    /* Rest of the program is omitted for brevity */
}

fn main() {
    unsafe {
        a();
    }
}