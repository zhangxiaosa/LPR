extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut result = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    'bb65: loop {
        _31 = ptr::addr_of_mut!((_44.0).0 .2);
        _47 = 1;
        _88 = 18215089233857363959_usize;

        loop {
            _46 = 42;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    result = ptr::addr_of_mut!(_46);
                    println!("{_47}");
                    return ptr::addr_of!(result);
                }
                0 => continue,
                _ => continue 'bb65,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}