unsafe fn f(k: bool, d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: bool = d.1 .1;
    let j = g;
    i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", f());
}