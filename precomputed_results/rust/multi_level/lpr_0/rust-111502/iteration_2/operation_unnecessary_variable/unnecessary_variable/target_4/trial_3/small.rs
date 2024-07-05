fn c() -> bool {
    let mut a = 0.;
    unsafe {
        f(&mut a, (&mut a, (0., false)))
    }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool))) -> bool {
    d;
    false
}

fn main() {
    println!("{}", c());
}