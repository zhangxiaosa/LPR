fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let b_0 = 0.0;
    let b_1 = false;
    unsafe { f((&mut a_0, &mut a_1), (&mut a_0, (b_0, b_1)), true, true) }
}

unsafe fn f(
    k: (*mut f32, *mut bool),
    d: (*mut f32, (f64, bool)),
    g: bool,
    h: bool,
) -> bool {
    let i = core::ptr::addr_of_mut!((*d).1 .1) as *mut bool;
    *i = g;
    d;
    return (*d).1 .1;
}

fn main() {
    println!("{}", c());
}