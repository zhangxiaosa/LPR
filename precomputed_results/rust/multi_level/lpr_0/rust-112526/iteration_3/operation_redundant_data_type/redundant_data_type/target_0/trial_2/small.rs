fn a() -> ((u64, u64, u8), u32, f32) {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = Default::default();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = &mut _44.0 .2;
    *_31 = 1;
    'bb65: loop {
        let tup_ptr = &mut tup;
        _31 = &mut (*tup_ptr).0 .0 .2;
        let _90 = _31.wrapping_offset(-9223372036854775808);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959usize;
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
                            println!("{}", *_47);
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
    let _44: ((u64, u64, u8), u32, f32) = a();
    println!("{:?}", _44);
}