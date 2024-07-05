fn c() -> bool {
    let mut a = 0.0;
    let mut d1 = 0.0;
    let mut d2 = false;
    let mut d = (&mut a, (d1, d2));
    unsafe { f(&mut a, d, true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let i = (d.1).1 as *mut bool;
    *i = true;
    d;
    return (d.1).1;
}

fn main() {
    println!("{}", c());
}