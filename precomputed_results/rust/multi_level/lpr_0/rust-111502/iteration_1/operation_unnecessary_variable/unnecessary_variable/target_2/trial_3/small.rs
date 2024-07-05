fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    unsafe { f(&mut a, (&mut a, (d_1_0, false)), true, true) }
}

unsafe fn f(k: *mut f32, _: (*mut f32, (f32, bool)), _: bool, _: bool) -> bool {
    true
}

fn main() {
    println!("{}", c());
}