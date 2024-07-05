fn c() -> f64 {
    let mut a = 0.0;
    let d = (core::ptr::null_mut(), (0.0, 0.0));
    unsafe {
        let first_ptr = &mut a as *mut f64;
        let second_ptr = &mut d.1 .1 as *mut f64;

        *first_ptr = *second_ptr = 1.0;

        d.1 .1
    }
}

fn main() {
    println!("{}", c());
}