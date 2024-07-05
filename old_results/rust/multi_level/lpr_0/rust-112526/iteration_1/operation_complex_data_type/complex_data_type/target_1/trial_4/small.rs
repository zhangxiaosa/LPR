unsafe fn a() -> *mut i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _44_0_0_0;
    let mut _44_0_0_1;
    let mut _44_0_0_2;
    let mut _44_0_1;
    let mut _44_0_2;
    let mut tup_0_0_0;
    let mut tup_0_0_1;
    let mut tup_0_0_2;
    let mut tup_0_1;
    let mut tup_0_2;
    let mut tup;
    let mut _95_0_0_0;
    let mut _95_0_0_1;
    let mut _95_0_0_2;
    let mut _95_0_1;
    let mut _95_0_2;
    let mut _95;
    
    _31 = &_44_0_2;
    *_31 = 1;
    isize_min = isize::MIN;
    
    'bb65: loop {
        let tup_ptr = &mut tup;
        _31 = &mut (*tup_ptr).0 .0 .2;
        _16 = 18215089233857363959usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = (_44_0_0_0, _44_0_0_1, _44_0_0_2);
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);
        
        loop {
            let tup_ptr2 = &mut tup;
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;
            
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
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
        a();
    }
}