extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut result = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
    *_31 = 1; // Directly assign value to `tup.0.0.2` instead of using `_31`
    isize_min = isize::MIN;
    'bb65: loop {
        _90 = ptr::addr_of_mut!(tup.0.0.2).wrapping_offset(isize::MIN); // Directly calculate offset from `tup.0.0.2` instead of `_31`
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            tup = (((0, 0, 0), 0, 0.0), false);
            isize_min = 0;
            _47 = *ptr::addr_of_mut!(tup.0.0.2); // Directly access `tup.0.0.2` instead of `_31`
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