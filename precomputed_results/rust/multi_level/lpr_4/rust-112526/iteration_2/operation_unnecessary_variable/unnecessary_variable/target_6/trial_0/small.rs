extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _88;
    let mut _33;
    let mut result = ptr::null_mut();
    _46 = 42;
    _88 = 18215089233857363959_usize;

    isize_min = isize::MIN;
    loop {
        match _88 {
            18215089233857363959 => {
                _88 = 0;
                _33 = ptr::addr_of_mut!(result);
                match _46 {
                    42 => {
                        *_33 = ptr::addr_of_mut!(_46);
                        println!("{_47}");
                        return ptr::addr_of!(result);
                    }
                    _ => continue,
                }
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