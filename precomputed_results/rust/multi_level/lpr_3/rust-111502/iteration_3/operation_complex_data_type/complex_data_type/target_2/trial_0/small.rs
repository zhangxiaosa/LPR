fn c() -> bool {
    let mut a_0: *mut f32 = core::ptr::null_mut();
    let mut a_1: bool = true;
    let mut a_2: f64 = 0.0;
    let mut a_3: bool = false;
    f((a_0, a_1, a_2, a_3), true, true)
}

fn f(mut a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    a.3 = b;
    a.3
}

fn main() {
    println!("{}", c());
}