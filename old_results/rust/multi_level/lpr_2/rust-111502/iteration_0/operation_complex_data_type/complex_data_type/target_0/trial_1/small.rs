fn c() -> bool {
    let mut a = (0f32, true);
    let b = (0f32, false);
    let d_first = &mut a as *mut (f32, bool);
    let d_second = b;
    let d = (d_first, d_second);
    let e = unsafe { f(d.0, d, true, true) };
    e
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d.1).1;
    let j = g;
    *i = j;
    (*d.1).1
}

fn main() {
    println!("{}", c());
}