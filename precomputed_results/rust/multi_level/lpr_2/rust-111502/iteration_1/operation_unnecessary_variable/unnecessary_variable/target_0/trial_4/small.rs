fn c() -> bool {
    let mut a = (0., true);
    unsafe { f((&mut a, (0., false)), true, true) }
}

unsafe fn f(d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}