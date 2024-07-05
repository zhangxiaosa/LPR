use std::isize;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _31;
    let mut _33;
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = &mut tup.0 .2;
    *_31 = 1;
    let mut isize_min = isize::MIN;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2;
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        let mut _88 = tup.0 .0 .2;
        _31 = _31.wrapping_offset(isize_min);
        loop {
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut tup;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return &tup.1;
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