fn c() -> bool {
    let mut a = 0.0;
    unsafe { f(&mut a, (&mut a, (0.0, false)), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    true
}

fn main() {
    println!("{}", c());
}