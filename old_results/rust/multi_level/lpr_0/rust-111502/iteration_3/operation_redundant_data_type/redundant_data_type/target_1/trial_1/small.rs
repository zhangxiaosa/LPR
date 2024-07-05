fn c() -> f32 {
    let mut a = 0.0;
    f(a)
}

unsafe fn f(d: f32) -> f32 {
    d.clone()
}

fn main() {
    println!("{}", c());
}