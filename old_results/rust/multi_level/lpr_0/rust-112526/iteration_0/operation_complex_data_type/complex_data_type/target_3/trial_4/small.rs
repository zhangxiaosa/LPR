unsafe fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _107: i32 = 0;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i64;
    let mut _90: *mut f32;
    let mut _177: *mut *mut i64 = std::ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut tup_0_0_0_2: u8 = 0;
    let mut tup_0_0_1: u32 = 0;
    let mut tup_0_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    let mut _95_0_0_0_2: u8 = 0;
    let mut _95_0_0_1: u32 = 0;
    let mut _95_0_0_2: f32 = 0.0;
    let mut _95_1: bool = false;

    _16 = 18215089233857363959usize;
    isize_min = isize::MIN;

    'bb65: loop {
        _31 = &_mut _44_0_2 as *mut f32;
        *_31 = 1;
        _90 = _31.offset(isize_min);
        _95_0_0_0_2 = _44_0_2;
        _95_0_0_1 = _44_1;
        _95_0_0_2 = _44_2;
        _95_1 = tup_1;
        _46 = 42;
        _88 = _16;
        _31 = _90.offset(isize_min);

        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(extracted_tup);
            std::ptr::write(tup_ptr2, ((_95_0_0_0_2, _95_0_0_1, _95_0_0_2), _95_1));
            isize_min = _107;
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