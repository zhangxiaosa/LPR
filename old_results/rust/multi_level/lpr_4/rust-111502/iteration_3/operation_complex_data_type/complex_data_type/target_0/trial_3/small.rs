fn main() {
    let f64_ptr: *mut f64 = core::ptr::null_mut();
    let inner_tuple: (f64, bool) = (1.0, false);
    let d: (*mut f64, (f64, bool)) = (f64_ptr, inner_tuple);

    let result = unsafe { f(d) };

    println!("{}", result);
}