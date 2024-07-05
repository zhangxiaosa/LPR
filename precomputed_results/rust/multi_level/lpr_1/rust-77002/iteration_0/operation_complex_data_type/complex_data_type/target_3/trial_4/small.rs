fn main() {
	const d: usize = 4;
	let mut p = [[0i64; 4]; 4];
	p[0] = [0, 1, 0, 0];
	p[1] = [0, 0, 1, 0];
	p[2] = [0, 0, 0, 1];
	p[3] = [1, 2, 2, 2];

	let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];

	fn f(a: &mut [[i64; 4]; 4], b: &mut [[i64; 4]; 4], n: usize, g: usize, h: usize) {
		for i in 0..n {
			for j in (0..h).step_by(2) {
				for k in 0..g {
					a[i][j] = b[k][j + 1];
				}
			}
		}
	}

	f(&mut p, &mut l, d, d, d);

	println!("{:?}", l);
}