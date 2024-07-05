use core::ptr;

unsafe fn a() -> *const u32 {
    let mut _46: usize;
    let mut _88: usize;
    let mut _31: isize;
    let mut _33: *mut usize;
    let mut _177: usize = 0;
    let mut _44: (u64, u64, u8, u32, usize) = Default::default();
    let mut tup: (u64, u64, u8, u32, usize, u8) = Default::default();
    _44.4 = 1;
    let mut isize_min: isize = isize::MIN;
    'bb65: loop {
        tup.4 = isize::MIN;
        _46 = 42;
        _88 = 18215089233857363959;
        isize_min = tup.4.wrapping_offset(isize_min);
        loop {
            tup = (_44.0 .0, _44.0 .1, _44.0 .2, _44.1, _44.2, Default::default());
            isize_min = 0;
            let _47 = tup.4;
            match _88 {
                18215089233857363959 => {
                    _88 = Default::default();
                    _177 = _46;
                    match _46 {
                        42 => {
                            println!("{}", _47);
                            return &_177;
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
        a() as *const u32;
    }
}