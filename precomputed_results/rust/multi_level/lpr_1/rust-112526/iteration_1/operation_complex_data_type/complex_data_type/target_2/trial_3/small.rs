fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: u8;
    let mut _47: u32;
    let mut _88: usize;
    let mut _31: &mut f32;
    let mut _33: &mut *mut i64;
    let mut _90: &mut u32;
    let mut _177: *mut i64 = std::ptr::null_mut();
    let mut _44_0: u64 = 0;
    let mut _44_1: u64 = 0;
    let mut _44_2: u8 = 0;
    let mut _44_3: u32 = 0;
    let mut _44_4: f32 = 0.0;
    let mut _95_0_0_0: u64 = 0;
    let mut _95_0_0_1: u64 = 0;
    let mut _95_0_0_2: u8 = 0;
    let mut _95_0_0_3: u32 = 0;
    let mut _95_0_0_4: f32 = 0.0;
    let mut _95_0_1: bool = false;

    _31 = &mut _44_4;
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let _31 = &mut _95_0_0_2;
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _95_0_0_0 = _44_0;
        _95_0_0_1 = _44_1;
        _95_0_0_2 = _44_2;
        _95_0_0_3 = _44_3;
        _95_0_0_4 = _44_4;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            *_33 = &mut _46;
            println!("{}", _47);
            return _177;
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}