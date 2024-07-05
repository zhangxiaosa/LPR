fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a as *mut _ as usize, b);
    let e = unsafe { f(&mut d.0 as *mut _, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (usize, (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1 .1 as *mut _;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}