struct A;

impl A {
    const fn b() -> u32 {
        42
    }
}

fn main() {
    println!("{}", A::b());
}