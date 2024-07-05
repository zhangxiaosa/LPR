unsafe fn a() -> isize {
    let mut isize_min;
    let mut _46 = 42;
    let mut _47;
    let mut _88 = 18215089233857363959_usize;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _44_0 = Default::default();
    let mut _44_1 = Default::default();
    let mut _44_2 = Default::default();
    let mut _tup_0 = Default::default();
    let mut _95 = Default::default();
    _31 = &mut _44_0.2;
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65_0: loop {
        _31 = &mut (_tup_0.0).0.2;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = (_44_0, _44_1, _44_2);
        _31 = _90.wrapping_offset(isize_min);
        loop {
            _tup_0 = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &_46;
                    match _46 {
                        42 => {
                            println!("{_47}");
                            return *_33;
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
    unsafe {
        a();
    }
}