extern crate core;

use core::ptr;

unsafe fn a() -> *const usize {
    let mut _46: usize;
    let mut _88: usize;
    let mut _31: *mut usize;
    let mut _33: *mut *mut usize;
    let mut _177: *mut usize = ptr::null_mut();
    let mut _44: ((u64, u64, u8), usize, usize) = Default::default();
    let mut tup: (((u64, u64, u8), usize, usize), u8) = Default::default();
    _31 = &mut _44.0 .2 as *mut usize;
    *_31 = 1;
    let mut isize_min: usize = isize::MIN as usize;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2 as *mut usize;
        _31 = _31.wrapping_offset(isize_min as isize);
        _46 = 42 as usize;
        _88 = 18215089233857363959;
        _31 = _31.wrapping_offset(isize_min as isize);
        loop {
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0 as usize;
            let _47 = *_31 as usize;
            match _88 {
                18215089233857363959 => {
                    _88 = 0 as usize;
                    _33 = &mut _177 as *mut *mut usize;
                    match _46 {
                        42 => {
                            *_33 = &_46 as *const usize as *mut usize;
                            println!("{}", _47);
                            return &_177 as *const *mut usize;
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