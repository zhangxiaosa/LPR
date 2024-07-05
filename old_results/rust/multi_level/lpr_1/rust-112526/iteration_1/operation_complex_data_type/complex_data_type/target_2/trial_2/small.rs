fn a() -> *const i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: &mut i32;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: &mut f32;
    let mut _33: &mut *mut i32;
    let mut _90: &mut f32;
    let mut _177: *mut i64 = std::ptr::null_mut();
    let mut _44_0: u64;
    let mut _44_1: u64;
    let mut _44_2: u8;
    let mut _44_3: u32;
    let mut _44_4: f32;
    let mut _95_0_0_0: u64;
    let mut _95_0_0_1: u64;
    let mut _95_0_0_2: u8;
    let mut _95_0_0_3: u32;
    let mut _95_0_0_4: f32;
    let mut _95_0_1: bool;
    _44_0 = Default::default();
    _44_1 = Default::default();
    _44_2 = Default::default();
    _44_3 = Default::default();
    _44_4 = Default::default();
    _95_0_0_0 = Default::default();
    _95_0_0_1 = Default::default();
    _95_0_0_2 = Default::default();
    _95_0_0_3 = Default::default();
    _95_0_0_4 = Default::default();
    _95_0_1 = Default::default();
    _31 = &mut _44_4;
    *_31 = 1.0;
    isize_min = isize::MIN;
    'bb65: loop {
        let _tup_ptr2 = &mut (_95_0_0_0, _95_0_0_1, _95_0_0_2, _95_0_0_3, _95_0_0_4, _95_0_1);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize_min);
        *(_tup_ptr2) = (_44_0, _44_1, _44_2, _44_3, _44_4, _95_0_1);
        _46 = &mut _88;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {     
            *_tup_ptr2 = (_44_0, _44_1, _44_2, _44_3, _44_4, _95_0_1);
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _46;
                    match _46 {
                        &42 => {
                            *_33 = &mut *(_46);
                            println!({_47});
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