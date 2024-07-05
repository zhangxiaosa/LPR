unsafe fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    let _44: ((u64, u64, u8), u32, f32) = Default::default();
    let _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _95.0 = _44;
    let _46 = 42;
    let _33 = std::ptr::addr_of_mut!(_177);
    *_33 = std::ptr::addr_of_mut!(_46);
    println!("{}");
    return std::ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}