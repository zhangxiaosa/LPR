fn a() -> u64 {
    let mut _46: u64;
    let mut _88: u64;
    let mut _31: u64;
    let mut _33: u64;
    let mut _177: *const u64 = std::ptr::null();
    let mut _44: (u64, u64, u8, u32, usize) = Default::default();
    let mut tup: ((u64, u64, u8, u32, usize), u8) = Default::default();
    _44.0 .2 = 1;
    let mut isize_min: isize = isize::MIN.into();
    'bb65: loop {
        tup.0 .0 .2 = isize::MIN;
        tup.0 .0 .2 = tup.0 .0 .2.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959;
        tup.0 .0 .2 = tup.0 .0 .2.wrapping_offset(isize_min);
        loop {
            tup = (_44, Default::default());
            isize_min = 0;
            let _47 = tup.0 .0 .2;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &_177;
                    match _46 {
                        42 => {
                            _177 = &_46;
                            println!("{_47}");
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
    a();
}