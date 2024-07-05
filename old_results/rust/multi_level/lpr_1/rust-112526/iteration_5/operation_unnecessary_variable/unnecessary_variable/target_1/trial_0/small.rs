fn a() -> u64 {
    let mut _46;
    let mut _88;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, u64) = Default::default();
    let mut tup: (((u64, u64, u8), u32, u64), u8) = Default::default();
    *_44.0 .2 = 1;
    let mut isize_min = i64::MIN;
    'bb65: loop {
        _33 = ptr::addr_of_mut!(tup.0 .0 .2).wrapping_offset(i64::MIN);
        _46 = 42;
        _88 = 18215089233857363959_u64;
        _33 = _33.wrapping_offset(isize_min);
        loop {
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0;
            let _47 = *_33;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
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