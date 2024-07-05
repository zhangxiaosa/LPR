extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31_1;
    let mut _33_1;
    let mut _31_2;
    let mut _33_2;
    let mut _31_3;
    let mut _33_3;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31_1 = ptr::addr_of_mut!(_44.0 .2);
    *_31_1 = 1;
    let mut isize_min = isize::MIN;

    _31_1 = ptr::addr_of_mut!(tup.0 .0 .2);
    _31_1 = _31_1.wrapping_offset(isize::MIN);
    _46 = 42;
    _88 = 18215089233857363959_usize;
    _31_1 = _31_1.wrapping_offset(isize_min);

    *ptr::addr_of_mut!(tup) = (_44, Default::default());
    isize_min = 0;
    _47 = *_31_1;

    match _88 {
        18215089233857363959 => {
            _88 = 0;
            _33_1 = ptr::addr_of_mut!(_177);
            match _46 {
                42 => {
                    *_33_1 = ptr::addr_of_mut!(_46);
                    println!("{_47}");
                    return ptr::addr_of!(_177);
                }
                _ => continue,
            }
        }
        0 => continue,
        _ => {},
    }

    *ptr::addr_of_mut!(tup) = (_44, Default::default());
    isize_min = 0;
    _47 = *_31_2;

    match _88 {
        18215089233857363959 => {
            _88 = 0;
            _33_2 = ptr::addr_of_mut!(_177);
            match _46 {
                42 => {
                    *_33_2 = ptr::addr_of_mut!(_46);
                    println!("{_47}");
                    return ptr::addr_of!(_177);
                }
                _ => continue,
            }
        }
        0 => continue,
        _ => {},
    }

    *ptr::addr_of_mut!(tup) = (_44, Default::default());
    isize_min = 0;
    _47 = *_31_3;

    match _88 {
        18215089233857363959 => {
            _88 = 0;
            _33_3 = ptr::addr_of_mut!(_177);
            match _46 {
                42 => {
                    *_33_3 = ptr::addr_of_mut!(_46);
                    println!("{_47}");
                    return ptr::addr_of!(_177);
                }
                _ => continue,
            }
        }
        0 => continue,
        _ => {},
    }
}

fn main() {
    unsafe {
        a();
    }
}