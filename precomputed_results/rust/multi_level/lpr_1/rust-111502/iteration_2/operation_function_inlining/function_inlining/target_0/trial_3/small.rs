fn c() -> bool {
    let d = (&mut 0.0, (0.0, false));
    let i = &mut d.1.1;
    *i = true;
    true
}

fn main() {
    println!("{}", c());
}