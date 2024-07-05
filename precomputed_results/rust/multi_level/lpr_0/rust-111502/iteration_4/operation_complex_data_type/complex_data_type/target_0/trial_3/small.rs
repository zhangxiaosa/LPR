fn c() -> f64 {
    unsafe { f(&mut 0.0, (0.0, 0.0)) }
}

unsafe fn f(d_ptr: *mut f64, d_tuple: (f64, f64)) -> f64 {
    let i = d_tuple.1 as *mut f64;
    *i = 1.0;
    (d_ptr, d_tuple);
    return d_tuple.1;
}

fn main() {
    println!("{}", c());
}