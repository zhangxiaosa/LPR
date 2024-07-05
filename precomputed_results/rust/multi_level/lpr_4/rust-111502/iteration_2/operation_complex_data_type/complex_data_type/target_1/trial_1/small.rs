fn c() -> bool {
    let mut a = (0.0, true);
    let mut d_tuple = (core::ptr::null_mut(), (1.0, false));

    unsafe {
        let d_ptr = &mut d_tuple as *mut _ as *mut (f64, bool);
        f(&mut a, d_ptr, true)
    }
}

unsafe fn f(_k: *mut (f64, bool), d: *mut (f64, bool), g: bool) -> bool {
    let i = &mut (*d).1 as *mut bool;
    *i = g;
    (*d).1
}

fn main() {
    println!("{}", c());
}