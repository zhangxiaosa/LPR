fn a() {
    [1; 5];
}

trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f, c> TypeVal<usize> for b<e, f> where e: TypeVal<c> {
    const c: usize = <e as TypeVal<c>>::c;
}

impl TypeVal<usize> for Five {
    const c: usize = 5;
}