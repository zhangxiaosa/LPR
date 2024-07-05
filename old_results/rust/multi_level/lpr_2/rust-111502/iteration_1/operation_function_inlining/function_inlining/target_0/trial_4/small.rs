fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);

    let k = &mut a as *mut (f32, bool);
    let d = (&mut a, b);
    let g = true;
    let h = true;

    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    let _ = d;

    return d.1 .1;
}

fn main() {
    println!("{}", c());
}