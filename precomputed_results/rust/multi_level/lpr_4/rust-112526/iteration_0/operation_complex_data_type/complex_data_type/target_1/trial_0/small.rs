extern crate core;
use core::ptr;

unsafe fn a() -> *mut *mut i64 {
    let mut _16: u64 = Default::default();
    let mut isize_min: i64 = Default::default();
    let mut _46: i64 = Default::default();
    let _107: i32 = 0;
    let mut _47: i64 = Default::default();
    let mut _88: u64 = Default::default();
    let mut _31: *mut i32 = Default::default();
    let mut _33: *mut *const *mut i64 = Default::default();
    let mut _90: *mut i32 = Default::default();
    let mut result: *mut i64 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN as i64;
    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959u64;
        _90 = _31.wrapping_offset(isize::MIN as isize) as *mut i32;
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min as isize) as *mut i32;
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = _107 as i64;
            _47 = *_31 as i64;
            match _88 {
                18215089233857363959u64 => {
                    _88 = 0u64;
                    _33 = ptr::addr_of_mut!(result) as *mut *const *mut i64;
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46) as *mut *const *mut i64;
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