fn c() -> bool {
    f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true)
}

fn f(_: *mut f32, d: (*mut f32, (f32, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}