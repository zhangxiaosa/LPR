fn a() -> *const *mut i64 {
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: *mut i32;
    let mut _33: *mut *mut i32;
    let mut _177: *mut i32 = std::ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut _44: ((u64, u64, u8), u32, f32) = (((0, 0, _44_0_2), _44_1, _44_2), 0.0);
    let mut tup_0_0_2: u8 = 0;
    let mut tup_1: u32 = 0;
    let mut tup_2: f32 = 0.0;
    let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, tup_0_0_2), tup_1, tup_2), false);
    let mut _95_0_0_2: u8 = 0;
    let mut _95_0_1: u32 = 0;
    let mut _95_0_2: f32 = 0.0;
    let mut _95_0: ((u64, u64, u8), u32, f32) = (((0, 0, _95_0_0_2), _95_0_1, _95_0_2), false);
    let mut _95: (((u64, u64, u8), u32, f32), bool) = (_95_0, false);

    _31 = std::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        _31 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        let _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = std::ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = std::ptr::addr_of_mut!(_46);
                            println!("{}", _47);
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
    unsafe {
        a();
    }
}