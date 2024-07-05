fn main() {
    unsafe {
        let d = (&mut 0.0, (0.0, 0.0));
        let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
        *i = 1.0;
        println!("{}", d.1 .1);
    }
}