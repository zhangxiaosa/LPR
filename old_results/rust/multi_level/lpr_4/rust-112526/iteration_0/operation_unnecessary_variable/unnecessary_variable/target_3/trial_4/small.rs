extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _88;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _44.0 .2 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        let _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        let _90 = _31.wrapping_offset(isize::MIN);
        let _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959;
        let _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = 0;
            let _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    match _46 {
                        42 => {
                            let result = ptr::addr_of_mut!(_46);
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