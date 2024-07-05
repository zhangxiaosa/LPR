trait TypeVal<d> {
    const c: d;
}

struct Five;
struct <e> {
    h: g,
}

impl<e> TypeVal<usize> for <e> where e: TypeVal<c> {}

fn main() {
    [1; <<e<Five>>::c];
}