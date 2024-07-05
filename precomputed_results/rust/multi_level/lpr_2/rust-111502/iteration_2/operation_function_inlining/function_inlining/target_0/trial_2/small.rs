fn c() -> bool {
    unsafe {
        let d = (&mut (0., true), (0.0, false));
        core::ptr::addr_of!(d.1 .1) as *mut bool = true;
        d.1 .1
    }
}

fn main() {
    println!("{}", c());
}