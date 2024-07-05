unsafe fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    println!("{}", 0);
    return std::ptr::addr_of!(_177);
}

fn main() {
    unsafe {
        a();
    }
}