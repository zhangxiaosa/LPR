fn a() -> *const *mut i64 {
    let mut _16;
    let isize_min;
    let mut _46;
    let _107 = 0;
    let mut _90;
    let _44_0_2;
    let mut _33;
    let mut _95_0;
    let mut _177 = std::ptr::null_mut();
    let mut _44_0_0_2;
    let mut _44_1;
    let mut _44_2;
    let mut _44_3;
    let mut _44_4;
    let mut _44_5;
    let mut tup_0_0_2;
    let mut tup_0_1;
    let mut tup_0_2;
    let mut tup_1;
    let mut tup_2;
    let mut tup_3;
    
    _44_0_2 = 1;
    isize_min = isize::MIN;
    
    'bb65: loop {
        _44_0_0_2 = _44_0_2;
        _16 = 18215089233857363959usize;
        _90 = _44_0_0_2.wrapping_offset(isize_min);
        _95_0 = (_44_0_0_2, _44_1, _44_2, _44_3, _44_4, _44_5);
        _46 = 42;
        
        _33 = _90.wrapping_offset(isize_min);
        
        loop {
            (tup_0_0_2, tup_0_1, tup_0_2) = _95_0;
            tup_1 = tup_0_0_2;
            tup_2 = tup_0_1;
            tup_3 = tup_0_2;
            (tup_0_0_2, tup_0_1, tup_0_2) = (tup_1, tup_2, tup_3);
            _95_0 = (tup_0_0_2, tup_0_1, tup_0_2, false);
            isize_min = _107;
            _46 = *_33;
            
            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    
                    match _46 {
                        42 => {
                            println!("{}", _46);
                            return std::ptr::addr_of!(_177);
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