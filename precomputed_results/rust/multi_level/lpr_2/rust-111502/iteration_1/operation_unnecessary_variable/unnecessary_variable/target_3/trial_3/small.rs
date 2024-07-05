fn c() -> bool {
    unsafe { f(&mut (0., true), (&mut (0., true), (0.0, false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    d;
    d.1 .1
}

fn main() {
    println!("{}", c());
}