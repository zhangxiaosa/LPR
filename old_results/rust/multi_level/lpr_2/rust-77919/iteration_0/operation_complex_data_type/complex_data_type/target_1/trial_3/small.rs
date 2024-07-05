struct Five;

struct g;

struct b_h<e, f> {
	h: g,
}

trait TypeVal<d> {
    const c: d;
}

impl<e, f> TypeVal<usize> for b_h<e, f> where e: TypeVal<c> {}

fn main() {
    const c: usize = <b_h<Five, Five>>::c;
    let target_optimization: usize = Five;
    [1; c];
}