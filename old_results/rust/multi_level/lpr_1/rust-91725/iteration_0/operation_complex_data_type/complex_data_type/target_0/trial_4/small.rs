fn main() {
	let h: u32 = 5;
	let arg: u32 = 4;
	let i: u32 = 2;
	let j: u32 = 0;
	while 2 == 0 {}
	let mut k: u32;
	k = arg;
	let mut l: u32;
	l = 0;
	l |= 1 << j;
	l = (i as u64 * l as u64) as u32;
	k = (k as u64 * l as u64) as u32;

	assert_eq!(k, 3);
}