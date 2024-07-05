use std::ptr;

unsafe fn a() -> *const *mut (((u64, u64, u8), u32, f32), bool) {
    let mut _46: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _47: u32 = Default::default();
    let mut _88: usize = Default::default();
    let mut _31: *mut f32;
    let mut _33: *mut u32 = Default::default();
    let mut _177: *mut *mut (((u64, u64, u8), u32, f32), bool) = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = &mut _44.0 .2 as *mut f32;
    *_31 = 1.0;
    let mut isize_min: isize = isize::MIN;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2 as *mut u8;
        _31 = _31.wrapping_offset(isize_min as isize);
        _95.0 = &mut _44 as *mut ((u64, u64, u8), u32, f32);
        _46 = Default::default();
        _88 = 18215089233857363959_usize as usize;
        _31 = _31.wrapping_offset(isize_min as isize);
        loop {
            *(&mut tup as *mut (((u64, u64, u8), u32, f32), bool)) = _95;
            isize_min = 0;
            _47 = *_31 as isize as u32;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177 as *mut *mut (((u64, u64, u8), u32, f32), bool);
                    match _46 {
                        42 => {
                            *_33 = &mut _46 as *mut u32;
                            println!("{:?}", _47);
                            return _177 as *const *mut (((u64, u64, u8), u32, f32), bool);
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