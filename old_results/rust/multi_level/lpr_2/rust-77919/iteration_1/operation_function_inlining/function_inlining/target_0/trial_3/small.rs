trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<c> {}

fn main() {
    let c: usize = <b<Five>>::TypeVal::<usize>::c;
    let array = [1; c];
}