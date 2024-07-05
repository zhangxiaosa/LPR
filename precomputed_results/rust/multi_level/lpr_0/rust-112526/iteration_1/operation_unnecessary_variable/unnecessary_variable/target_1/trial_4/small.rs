unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _33;
    let mut _90;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        let _90 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2).wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959usize;
        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2).wrapping_offset(isize_min);
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