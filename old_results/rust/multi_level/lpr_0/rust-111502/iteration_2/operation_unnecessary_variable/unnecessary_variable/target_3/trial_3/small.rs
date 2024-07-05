fn c() -> bool {
    unsafe { f(0 as *mut f32, (0., false), true) }
}

unsafe fn f(_: *mut f32, _: (*mut f32, (f32, bool)), h: bool) -> bool {
    true
}

fn main() {
    println!("{}", c());
}