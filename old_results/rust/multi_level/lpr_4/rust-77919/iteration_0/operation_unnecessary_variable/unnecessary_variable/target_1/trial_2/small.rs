trait TypeVal<d> {
    const c: d;
}

struct Five;

fn main() {
    [1; Five::c];
}
