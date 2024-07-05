fn c() -> bool {
    let mut a = 0.0;
    let d_1 = true;
    let d_2 = 0.0;
    let d_3 = false;
    let e = unsafe { f(&mut a, (d_1, d_2, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let j = g;
    d.3 = j;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}