unsafe fn a() -> (((u64, u64, u8), u32, f32), bool) {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    _31 = std::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        _31 = std::ptr::addr_of_mut!(_44.0 .2);
        let _90 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    match _46 {
                        42 => {
                            _177 = std::ptr::addr_of_mut!(_46);
                            println!("{}", _47);
                            return _177;
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