fn c() -> bool {
    let mut a = 0.;
    let mut d = (&mut a, (0., false));
    let i = &mut false;
    *i = true;
    d = (0., d.1 .1);
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}