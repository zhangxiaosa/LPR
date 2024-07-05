extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16;
    let mut _46;
    let mut _47;
    let mut _31;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _31 = _90.wrapping_offset(-9223372036854775808 as isize); // Replace `isize_min` with its constant value
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = (_44, Default::default());
            _47 = *_31;
            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    _31 = ptr::addr_of_mut!(_46);
                    match _46 {
                        42 => {
                            println!("{_47}");
                            return ptr::addr_of!(_177);
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