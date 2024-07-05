fn c() -> bool {
    f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true)
}

fn f(_: *mut f64, d: (*mut f64, (f64, bool)), g: bool, _: bool) -> f64 {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}