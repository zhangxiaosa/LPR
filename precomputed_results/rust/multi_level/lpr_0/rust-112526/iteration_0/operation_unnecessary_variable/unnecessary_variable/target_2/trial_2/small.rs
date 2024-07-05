fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _95.0 = _44;
    _46 = 42;
    _88 = 18215089233857363959;
    loop {
        _33 = std::ptr::addr_of_mut!(_46);
        println!("{}", _47);
        return std::ptr::addr_of!(_177);
    }
}

fn main() {
    unsafe {
        a();
    }
}