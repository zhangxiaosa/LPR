const C_VALUE: usize = 1;

struct Five;

struct B<e, f> {
    h: G_TYPE,
}

trait TypeVal<T> {
    const C: T;
}

impl<T> TypeVal<T> for B<Five, Five> {
    const C: T = C_VALUE;
}

fn main() {
    let array_length: usize = <B<Five, Five>>::C;
    let array = [1; array_length];

    // The target to be optimized is "Five".
}