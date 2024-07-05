fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let e = {
        let i = &mut d.1 .1;
        let j = true;
        *i = j;
        d;
        d.1 .1
    };
    return e;
}

fn main() {
    println!("{}", c());
}