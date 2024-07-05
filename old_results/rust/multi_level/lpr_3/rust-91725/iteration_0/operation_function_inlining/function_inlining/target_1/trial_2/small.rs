fn g(h: u32, arg: u32) -> u32 {
	let mut k;
	k = arg;
	let mut l;
	l = 0;
	l |= 1 << 0;
	l = ((2 as u64 * l as u64) % h as u64) as u32;
	k = ((arg as u64 * arg as u64) % h as u64) as u32;
	k
}

fn main() {
	assert_eq!(g(5, 4), 3);
}