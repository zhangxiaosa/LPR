unsafe fn a() -> *const *mut i64 {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _33;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _31 = std::ptr::addr_of_mut!(_44.0 .2); // Constant propagation, replacing with a constant address

    *_31 = 1;

    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        let _90 = _31.wrapping_offset(isize::MIN); // Constant propagation if `isize_min` is known
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959usize;

        let _31 = _90.wrapping_offset(isize::MIN); // Constant propagation if `isize_min` is known

        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            let isize_min = 0;
            _47 = *_31; // Copy propagation if `_31` is known
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