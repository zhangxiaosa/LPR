extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut ((u64_a, u64_b, u8_c), u32_d, f32_e) = Default::default();
    let mut bool_f = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(u8_c);
        _16 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize::MIN);
        (u64_a, u64_b, u8_c, u32_d, f32_e, bool_f) = ((_44, bool_f), bool_f);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        loop {
            *ptr::addr_of_mut!(tup) = (_44, bool_f);
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
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
        let (u64_a, u64_b, u8_c, u32_d, f32_e, bool_f) = a();
        // Use the decomposed variables as needed
    }
}