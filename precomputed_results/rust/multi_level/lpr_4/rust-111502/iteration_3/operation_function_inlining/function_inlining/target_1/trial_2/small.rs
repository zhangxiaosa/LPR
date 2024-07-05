fn c() -> bool {
    unsafe {
        let d = (core::ptr::null_mut(), (1.0, false));

        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        *i = true;
        d;
        return d.1 .1;
    }
}

fn main() {
    println!("{}", c());
}