extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _95.0 = _44;
    loop {
        _177 = ptr::null_mut();
        match 18215089233857363959 {
            18215089233857363959 => {
                let _33 = ptr::addr_of_mut!(ptr::null_mut());
                *_33 = ptr::addr_of_mut!(42);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
            0 => continue,
            _ => break,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}