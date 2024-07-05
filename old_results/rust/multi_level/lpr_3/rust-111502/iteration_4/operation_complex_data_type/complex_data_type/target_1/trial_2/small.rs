fn c() -> bool {
    let a_3 = false;
    f((core::ptr::null_mut(), 0.0, a_3), true)
}

fn f(a: (*mut f32, f64, bool), b: bool) -> bool {
    let mut i = a.2;
    i = b;
    i
}

fn main() {
    println!("{}", c());
}