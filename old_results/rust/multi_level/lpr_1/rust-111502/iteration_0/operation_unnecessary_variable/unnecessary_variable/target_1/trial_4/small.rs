fn c() -> bool {
    let mut a = (0., true);
    let k1 = (0., true);
    let k2 = 0.0;
    let k3 = false;
    let d = (&mut a, (k2, k3));
    return f(&mut a, (&mut a, (k2, k3)), true, true);
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1 .1;
    let j = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}