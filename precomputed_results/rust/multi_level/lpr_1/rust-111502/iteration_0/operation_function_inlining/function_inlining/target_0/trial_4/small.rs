fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let i = &mut d.1 .1;
    let j = true;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}