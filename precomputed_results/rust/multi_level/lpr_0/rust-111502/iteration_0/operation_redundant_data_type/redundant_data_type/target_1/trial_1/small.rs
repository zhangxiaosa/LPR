fn c() -> bool {
    let mut a = (0.0, true);
    let b = (0.0, false);
    let d = (&mut a as *mut (f32, bool), b);
    let e = unsafe { f(&mut *d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d.1).1 as *mut bool;
    let j = g;
    *i = j;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}