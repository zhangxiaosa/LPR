fn c() -> bool {
    let mut a: f32 = 0.0;
    let e: bool = unsafe { f((&mut a, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i: *mut bool = &mut d.3;
    *i = g;
    return d.3;
}

fn main() {
    println!("{}", c());
}