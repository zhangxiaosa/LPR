trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<(), ()> {
    h: g,
}

impl TypeVal<usize> for b<(), ()> {}

fn main() {
    [1; <<b<Five, Five>>::c>];
}