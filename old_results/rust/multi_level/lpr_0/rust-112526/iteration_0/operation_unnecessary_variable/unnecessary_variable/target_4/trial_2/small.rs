unsafe fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let tup_ptr = std::ptr::addr_of_mut!(tup);
    let tup_ptr2 = std::ptr::addr_of_mut!(tup);

    std::ptr::addr_of_mut!(_44.0.2);

    tup;
    tup_ptr2;
    tup_ptr;

    _95.0 = _44;

    _177;

    return std::ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}