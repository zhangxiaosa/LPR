fn g(h: u32, arg: u32) -> u32 {
	let j = 0;
	while 2 == 0 {}

	let result;
	if 0 == 0 {
		result = 2 * 2;
	} else {
		result = 2;
	}

	((arg as u64 * result) % h as u64) as u32
}

fn main() {
	assert_eq!(g(5, 4), 3);
}