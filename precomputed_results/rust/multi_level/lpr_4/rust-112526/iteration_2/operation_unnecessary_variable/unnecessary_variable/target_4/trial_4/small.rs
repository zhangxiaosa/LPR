extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _31;
    let mut _33;
    let mut result = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
    _31 = ptr::addr_of_mut!(tup.0 .0 .2);
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65: loop {
        tup = (((0, 0, 0), 0, 0.0), false);
        isize_min = 0;
        _47 = *_31;
        match 18215089233857363959_usize {
            18215089233857363959 => {
                _33 = ptr::addr_of_mut!(result);
                _33 = ptr::addr_of_mut!(42);
                println!("{_47}");
                return ptr::addr_of!(result);
            }
            0 => continue,
            _ => continue 'bb65,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}