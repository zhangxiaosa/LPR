fn c() -> bool {
    let e = unsafe { f(0.0, (0.0, false), true) };
    e
}

unsafe fn f(_: f32, d: (f32, bool), g: bool) -> bool {
    let i = &mut d.1 as *mut bool;
    *i = g;
    *i
}

fn main() {
    let _ = c();
}