fn a() -> ((u64, u64, u8), u32, f32) {
    let mut isize_min;
    let mut _46: u32;
    let mut _47: u32;
    let mut _88: u64 = 18215089233857363959;
    let mut _31: *mut f32;
    let mut _33: *mut *mut u32;
    let mut _90: *mut f32;
    let mut _177: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _44 = ((u64::default(), u64::default(), u8::default()), u32::default(), f32::default());
    _44.0 .2 = 1;
    isize_min = u64::MIN as isize;
    'bb65_0: loop {
        let tup_ptr = &mut _tup_0;
        _31 = &mut tup_ptr.0 .0 .2;
        _90 = _31.wrapping_offset(isize_min as usize) as *mut f32;
        _95.0 = (((_44.0 .0 .0, _44.0 .0 .1, _44.0 .0 .2), _44.0 .1, _44.0 .2), _95.0 .1);
        _46 = 42;
        _31 = _90.wrapping_offset(isize_min as usize) as *mut f32;
        loop {
            let tup_ptr2 = &mut _tup_0;
            *tup_ptr2 = (_95.0, _95.1);
            isize_min = 0;
            _47 = *_31 as u32;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{:?}", *_47);
                            return &_177 as *const ((u64, u64, u8), u32, f32);
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65_0,
            }
        }
    }
}

fn main() {
    a();
}