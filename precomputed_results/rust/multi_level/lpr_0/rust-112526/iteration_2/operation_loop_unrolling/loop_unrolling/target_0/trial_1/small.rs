unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _31 = std::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    
    let tup_ptr = std::ptr::addr_of_mut!(tup);
    let _31 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
    let _90 = _31.wrapping_offset(isize::MIN);
    _95.0 = _44;
    let _46 = 42;
    let _88 = 18215089233857363959usize;
    let _31 = _90.wrapping_offset(isize_min);

    let tup_ptr2 = std::ptr::addr_of_mut!(tup);
    *tup_ptr2 = _95;
    isize_min = 0;
    let _47 = *_31;
    match _88 {
        18215089233857363959 => {
            let _33 = std::ptr::addr_of_mut!(_177);
            match _46 {
                42 => {
                    *_33 = std::ptr::addr_of_mut!(_46);
                    println!("{}", _47);
                    return std::ptr::addr_of!(_177);
                }
                _ => {}
            }
        }
        0 => {}
        _ => {}
    }

    // Repeat the loop body once more
    let tup_ptr2 = std::ptr::addr_of_mut!(tup);
    *tup_ptr2 = _95;
    isize_min = 0;
    let _47 = *_31;
    match _88 {
        18215089233857363959 => {
            let _33 = std::ptr::addr_of_mut!(_177);
            match _46 {
                42 => {
                    *_33 = std::ptr::addr_of_mut!(_46);
                    println!("{}", _47);
                    return std::ptr::addr_of!(_177);
                }
                _ => {}
            }
        }
        0 => {}
        _ => {}
    }

    // Rest of the program...
}

fn main() {
    unsafe {
        a();
    }
}