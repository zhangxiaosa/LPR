fn main() {
	const d: usize = 4;
	const p: [[i64; 4]; 4] = [
		[0, 1, 0, 0],
		[0, 0, 1, 0],
		[0, 0, 0, 1],
		[1, 2, 2, 2]
	];
	let mut l = [0, 1, 0, 0];
	{
		let mut l = [0; 4];
		l[0] = l[1];
		l
	}
	println!("{:?}", l);
}