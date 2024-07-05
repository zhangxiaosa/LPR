extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _33;
    let mut result = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
    ptr::addr_of_mut!(tup.0 .0 .2).write(1);
    isize_min = isize::MIN;
    'bb65: loop {
        let _90 = ptr::addr_of_mut!(tup.0 .0 .2).wrapping_offset(isize::MIN);
        _46 = 42;
        if _46 == 42 {
            _33 = ptr::addr_of_mut!(result);
            *_33 = ptr::addr_of_mut!(_46);
            println!("{}", tup.0 .0 .2);
            return ptr::addr_of!(result);
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}