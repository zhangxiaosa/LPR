fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = ((&mut a as *mut (f32, bool)) as usize, b);
    let e = unsafe { f((&mut a as *mut (f32, bool)) as usize, d, true, true) };
    return e;
}

unsafe fn f(k: usize, d: (usize, (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut *((k as *mut (f32, bool)).offset(1) as *mut bool);
    let j = g;
    *i = j;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}