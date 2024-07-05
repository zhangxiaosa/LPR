fn main() {
	let d: usize = 4;
	let mut l: [[i64; 4]; 4] = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
	for j in 0..d {
		l[0][j] = b[0][j];
	}
	println!("{:?}", l);
}