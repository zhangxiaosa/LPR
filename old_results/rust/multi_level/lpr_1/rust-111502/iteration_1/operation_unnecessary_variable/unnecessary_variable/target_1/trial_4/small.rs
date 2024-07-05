fn c() -> bool {
    unsafe {
        let d = core::ptr::null_mut();
        let i = core::ptr::addr_of!(d.1) as *mut bool;
        let g = true;
        *i = g;
        *i
    }
}

fn main() {
    println!("{}", c());
}
