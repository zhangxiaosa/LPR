fn c() -> f64 {
    let mut f64_ptr = &mut 0.0 as *mut f64;
    let tuple = (0.0, 0.0);
    
    unsafe { f(f64_ptr, tuple) }
}

unsafe fn f(ptr: *mut f64, tuple: (f64, f64)) -> f64 {
    let i = core::ptr::addr_of!((*ptr).1) as *mut f64;
    *i = 1.0;
    tuple.1;
}

fn main() {
    println!("{}", c());
}