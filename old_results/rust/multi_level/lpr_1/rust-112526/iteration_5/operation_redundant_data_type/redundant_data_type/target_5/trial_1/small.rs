extern crate core;

use core::ptr;

unsafe fn a() -> u64 {
    let mut _46: u8;
    let mut _88: u8;
    let mut _31: u8;
    let mut _33: u8;
    let mut _177: u8 = ptr::null_mut();
    let mut _44: (u8, u32, usize) = Default::default();
    let mut tup: ((u8, u32, usize), u8) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    let mut isize_min: isize = isize::MIN;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_u64 as u8;
        _31 = _31.wrapping_offset(isize_min);
        loop {
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0;
            let _47 = *_31;
            match _88 {
                18215089233857363959_u64 as u8 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!({"_47"});
                            return _177 as u64;
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