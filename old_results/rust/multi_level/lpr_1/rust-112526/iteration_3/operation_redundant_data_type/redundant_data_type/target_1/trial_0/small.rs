extern crate core;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = core::ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, f32) = Default::default();
    let mut tup: ((u64, u64, u8, u32, f32), bool) = (((0, 0, 0, 0, 0.0), false));
    let mut _95: ((u64, u64, u8, u32, f32), bool) = (((0, 0, 0, 0, 0.0), false));
    _31 = &mut _44.4 as *mut f32 as *mut usize;
    *_31 = 1;
    let mut isize_min = isize::MIN;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2 as *mut u8 as *mut usize;
        _31 = (_31 as *mut isize).wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = (_31 as *mut isize).wrapping_offset(isize_min);
        loop {
            std::ptr::write(&mut tup, _95);
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177 as *mut *mut usize;
                    match _46 {
                        42 => {
                            *_33 = &mut _46 as *mut usize;
                            println!("{}", _47);
                            return &*_177 as *const usize;
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