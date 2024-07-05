extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let _107 = 0;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    
    let tup_ptr = ptr::addr_of_mut!(tup);
    let tup_ptr2 = ptr::addr_of_mut!(tup);
    let _33 = ptr::addr_of_mut!(_177);
    
    *_31 = isize::MIN;
    _95.0 = _44;
    _46 = 42;
    _88 = 18215089233857363959_usize;
    _90 = _31.wrapping_offset(isize::MIN);
    
    *tup_ptr = _95;
    *tup_ptr2 = _95;
    
    _47 = *_31;
    if _88 == 18215089233857363959 {
        _88 = 0;
        *_33 = ptr::addr_of_mut!(_46);
        println!("{_47}");
        return ptr::addr_of!(_177);
    } else if _88 == 0 {
        return ptr::addr_of!(_177);
    }

    _47 = *_31;
    if _88 == 18215089233857363959 {
        _88 = 0;
        *_33 = ptr::addr_of_mut!(_46);
        println!("{_47}");
        return ptr::addr_of!(_177);
    } else if _88 == 0 {
        return ptr::addr_of!(_177);
    }

    // Repeat the above pattern as needed for any remaining iterations

    ptr::addr_of!(_177)
}

fn main() {
    unsafe {
        a();
    }
}