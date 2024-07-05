fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    let d = (&mut a, (d_1_0, false));
    let i = &mut (d.1).1;
    *(d.1).1 = true;
    return (d.1).1;
}

fn main() {
    println!("{}", c());
}