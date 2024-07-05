unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = std::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = -9223372036854775808;
    let tup_ptr = std::ptr::addr_of_mut!(tup);
    _31 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
    let _90 = _31.wrapping_offset(-9223372036854775808);
    _95.0 = _44;
    _46 = 42;
    _88 = 18215089233857363959usize;
    _31 = _90.wrapping_offset(isize_min);
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
                _ => _46 = _46 - 1 // Update the loop control variable
            }
        }
        0 => _88 = _88 - 1, // Update the loop control variable
        _ => _88 = _88 - 1 // Update the loop control variable
    }
    let tup_ptr3 = std::ptr::addr_of_mut!(tup);
    *tup_ptr3 = _95;
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
                _ => _46 = _46 - 1 // Update the loop control variable
            }
        }
        0 => _88 = _88 - 1, // Update the loop control variable
        _ => _88 = _88 - 1 // Update the loop control variable
    }
    // Repeat the unrolled loop for additional iterations if needed
}

fn main() {
    unsafe {
        a();
    }
}