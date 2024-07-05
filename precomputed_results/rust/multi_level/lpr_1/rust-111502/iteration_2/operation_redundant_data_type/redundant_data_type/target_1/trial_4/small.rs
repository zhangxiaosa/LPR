fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true) }
}

unsafe fn f(_: f32, d: (f32, (f64, bool)), g: bool, _: bool) -> bool {
    d.1 = g;
    d.1
}

fn main() {
    println!("{}", c());
}