fn c() -> bool {
    let _: *mut f32 = core::ptr::null_mut();
    let d: (*mut f32, (f64, bool)) = (&mut 0.0, (0.0, false));
    let g: bool = true;
    let _: bool = true;

    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}