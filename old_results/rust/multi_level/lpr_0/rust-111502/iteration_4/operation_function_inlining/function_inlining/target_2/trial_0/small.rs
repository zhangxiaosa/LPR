unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    d;
    return d.1 .1;
}

fn main() {
    unsafe {
        let mut d = (&mut 0.0, (0.0, 0.0));
        let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
        *i = 1.0;
        let result = d.1 .1;
        println!("{}", result);
    }
}