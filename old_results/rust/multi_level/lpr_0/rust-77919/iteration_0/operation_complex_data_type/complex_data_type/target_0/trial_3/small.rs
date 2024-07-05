trait TypeVal<d> {
	const c: d;
}

struct Five;
struct b<e, f> where e: TypeVal<Five> {
	h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<Five> {}

fn main() {
	let target_optimized = Five;
	[1; <b<Five, Five>>::c];
}