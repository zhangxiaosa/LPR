fn c() -> bool {
    let mut a = 0.0;
    let b: bool = true;
    let c: f64 = 0.0;
    let d: bool = false;

    let e = unsafe { f((&mut a, b, c, d), true, true) };

    return e;
}

unsafe fn f(d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;

    let (mut d0, d1, d2, d3) = d;

    return d3;
}

fn main() {
    println!("{}", c());
}