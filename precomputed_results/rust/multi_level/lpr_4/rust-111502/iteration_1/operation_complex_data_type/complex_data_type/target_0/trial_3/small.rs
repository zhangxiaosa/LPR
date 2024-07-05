fn c() -> bool {
    let mut a_value = 0.0;
    let mut a_flag = true;
    let mut a = (&mut a_value, &mut a_flag);

    let e = unsafe { f(&mut a, (&mut a_value, (&mut 1.0, false)), true) };

    return e;
}

unsafe fn f(_k: *mut (&mut f32, &mut bool), d: (*mut (&mut f32, &mut bool), (*mut f64, &mut bool)), g: bool) -> bool {
    let i = d.1 .1 as *mut bool;
    *i = g;
    d;
    return *d.1 .1;
}

fn main() {
    println!("{}", c());
}