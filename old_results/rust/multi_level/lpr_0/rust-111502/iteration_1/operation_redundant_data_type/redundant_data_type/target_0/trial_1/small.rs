fn c() -> bool {
    let mut a = (0., true);
    unsafe { f(&mut a, &mut (0., false), true, true) }
}

unsafe fn f(k: *mut f32, d: *mut bool, g: bool, h: bool) -> bool {
    *d = true;
    d;
    return *d;
}

fn main() {
    println!("{}", c());
}