fn a() -> impl B {
    "".d(())
}

trait B {
    fn d<E>(self, e: E) -> F<E>;
}

struct F<C> {
    h: C,
}

impl<T> B for T {}

fn main() {
    let result = a();
    println!("{:?}", result);
}