fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let k = &mut a as *mut (f32, bool);
    let d = (&mut a as *mut (f32, bool), (0.0, false));
    let g = true;
    let h = true;
    let i = &mut d.1.1 as *mut bool;
    *i = g;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}