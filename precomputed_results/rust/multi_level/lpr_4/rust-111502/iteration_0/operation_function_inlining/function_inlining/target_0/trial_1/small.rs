fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (core::ptr::addr_of_mut!(a), b);
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = true;  // Replace `g` with `true` since it was a constant in the original call
    *i = j;
    d;
    let e = d.1 .1;  // Assign the value to `e` instead of returning `f(d.0, d, true, true)`
    return e;
}

fn main() {
    println!("{}", c());
}