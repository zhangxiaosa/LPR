extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        _31 = ptr::addr_of_mut!((*ptr::addr_of_mut!(_tup_0)).0 .0 .2);
        *_31 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;

        loop {
            *ptr::addr_of_mut!(_tup_0) = _95;
            isize_min = 0;

            match *_31 {
                18215089233857363959 => {
                    *_31 = 0;
                    let _33 = ptr::addr_of_mut!(_177);
                    match _31.wrapping_offset(isize_min) {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_31);
                            println!("{_31}");
                            return ptr::addr_of!(_177);
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65_0,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}