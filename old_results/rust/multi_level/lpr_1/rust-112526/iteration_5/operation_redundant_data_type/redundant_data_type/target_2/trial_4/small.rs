use std::ptr;

unsafe fn a() -> *const *mut isize {
    let mut _46;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _44: ((u64, u64, u8), u32, isize) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    let mut isize_min = isize::MIN;
    loop {
        _31 = ptr::addr_of_mut!(_44.0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_isize;
        _31 = _31.wrapping_offset(isize_min);
        loop {
            _44 = Default::default();
            isize_min = 0;
            let _47: isize = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_46);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!("{}", _47);
                            return ptr::null();
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => break,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}