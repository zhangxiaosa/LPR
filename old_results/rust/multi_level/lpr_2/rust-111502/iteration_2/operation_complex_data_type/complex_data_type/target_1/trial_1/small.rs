fn c() -> bool {
    unsafe { f(&mut (0., true), (&mut (0., true), (0.0, false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let i = &mut (*d.1).1;
    *i = true;
    *i
}

fn main() {
    println!("{}", c());
}