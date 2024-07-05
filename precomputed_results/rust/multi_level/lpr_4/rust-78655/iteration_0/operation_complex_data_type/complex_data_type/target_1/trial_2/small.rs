const a: *const u32 = {
	let b;
	&b
};

fn main() {
	let a = a;
}