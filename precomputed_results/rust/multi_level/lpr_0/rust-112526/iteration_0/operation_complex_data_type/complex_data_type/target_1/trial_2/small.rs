fn a() -> *const *mut i64 {
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
    let mut _44_0_0_2: u8 = 0;
    let mut _44_0_1: u32 = 0;
    let mut _44_0_2: f32 = 0.0;
    let mut _44_1: bool = false;
    let mut tup_0_0_0_2: u8 = 0;
    let mut tup_0_1: u32 = 0;
    let mut tup_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    let mut _95_0_0_0_2: u8 = 0;
    let mut _95_0_1: u32 = 0;
    let mut _95_0_2: f32 = 0.0;
    let mut _95_1: bool = false;
    _31 = unsafe { std::ptr::addr_of_mut!(_44_0_2) };
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = unsafe { std::ptr::addr_of_mut!(tup) };
        _31 = unsafe { std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2) };
        _16 = 18215089233857363959usize;
        _90 = _31.wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = unsafe { std::ptr::addr_of_mut!(tup) };
            *tup_ptr2 = _95;
            isize_min = _107;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = unsafe { std::ptr::addr_of_mut!(_177) };
                    match _46 {
                        42 => {
                            *_33 = unsafe { std::ptr::addr_of_mut!(_46) };
                            println!("{}", _47);
                            return unsafe { std::ptr::addr_of!(_177) };
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