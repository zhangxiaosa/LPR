fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a as *mut (f32, bool), b);
    let j = true;
    *d.0 = j;
    d.1 .1
}

fn main() {
    println!("{}", c());
}