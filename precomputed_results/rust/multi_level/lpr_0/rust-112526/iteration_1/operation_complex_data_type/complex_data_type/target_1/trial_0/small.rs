fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i64;
    let mut _47: isize;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i64;
    let mut _90: *mut f32;
    let mut _177: *const *mut i64 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = std::ptr::addr_of_mut!(_44.0 .2) as *mut f32;
    *_31 = 1.0;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup) as *mut (((u64, u64, u8), u32, f32), bool);
        _31 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2) as *mut f32;
        _16 = 18215089233857363959usize;
        _90 = _31.offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.offset(isize_min);
        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup) as *mut (((u64, u64, u8), u32, f32), bool);
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = std::ptr::addr_of_mut!(_177) as *mut *mut i64;
                    match _46 {
                        42 => {
                            *_33 = std::ptr::addr_of_mut!(_46) as *mut *mut i64;
                            println!("{}", _47);
                            return std::ptr::addr_of!(_177) as *const *mut i64;
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