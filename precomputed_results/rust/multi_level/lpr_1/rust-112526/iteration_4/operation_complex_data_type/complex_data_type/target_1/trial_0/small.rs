extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44_0_0_0;
    let mut _44_0_0_1;
    let mut _44_0_0_2;
    let mut _44_1;
    let mut _44_2;
    let mut tup_0_0_0;
    let mut tup_0_0_1;
    let mut tup_0_0_2;
    let mut tup_0_1;
    let mut tup_1;
    let mut isize_min = isize::MIN;

    _31 = ptr::addr_of_mut!(_44_0_0_2);
    *_31 = 1;

    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup_0_0_0);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);

        loop {
            *ptr::addr_of_mut!(tup_0_0) = (_44_0, _44_1, _44_2);
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
        a();
    }
}