const a: *const u32 = {
	// `b` is unused, so it can be removed
};

fn main() {
	let a = a;
}