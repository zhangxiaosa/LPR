trait TypeVal<d> {
    const c: d;
}

struct Five;

fn main() {
    const c: usize = <b<Five, Five>>::c;
    [1; c];
}