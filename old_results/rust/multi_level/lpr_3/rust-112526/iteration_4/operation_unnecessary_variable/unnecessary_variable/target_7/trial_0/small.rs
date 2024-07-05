extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut isize {
    let mut _46 = 42;
    let mut _47;
    let mut _88 = 18215089233857363959_usize;
    let mut _31;
    let mut _33;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    _31.wrapping_offset(isize::MIN);
    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _31.wrapping_offset(isize::MIN);
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            if _88 == 18215089233857363959 {
                _88 = 0;
                _33 = ptr::addr_of_mut!(_46);
                if _46 == 42 {
                    println!("{_47}");
                    return ptr::addr_of!(_33);
                } else {
                    continue;
                }
            } else if _88 == 0 {
                continue;
            } else {
                continue 'bb65_0;
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}