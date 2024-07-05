trait TypeVal<d> {
    const C: d;
}

struct Five;

impl TypeVal<usize> for Five {
    const C: usize = 5;
}

fn main() {
    let _arr = [1; <Five as TypeVal<usize>>::C];
}