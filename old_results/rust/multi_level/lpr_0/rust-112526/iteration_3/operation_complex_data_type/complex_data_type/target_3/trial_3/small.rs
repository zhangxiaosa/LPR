fn a() -> *const *mut i64 {
    let mut isize_min: isize;
    let mut _46: i64;
    let mut _47: i32;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i64;
    let mut _177: *mut *mut i64 = std::ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, f32) = Default::default();
    let mut tup: ((u64, u64, u8), u32, f32) = Default::default();

    isize_min = -9223372036854775808;
    _46 = 42;
    _88 = 18215089233857363959usize;

    _31 = std::ptr::addr_of_mut!(_44.4);
    *_31 = 1;

    _33 = std::ptr::addr_of_mut!(_177);
    *_33 = std::ptr::addr_of_mut!(_46);

    _47 = *_31;

    tup = _44;

    println!("{}", _47);
    return std::ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}