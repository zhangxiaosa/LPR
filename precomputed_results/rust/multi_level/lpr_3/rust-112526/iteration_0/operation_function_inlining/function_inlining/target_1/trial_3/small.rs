extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16;
    ...
        _33 = ptr::addr_of_mut!(_177);
        match _46 {
            42 => {
                *_33 = ptr::addr_of_mut!(_46);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}