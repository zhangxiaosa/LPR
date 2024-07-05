fn main() {
	let mut l = [0, 1, 0, 0];
	let mut result = [0, 0, 0, 0];
	result[0] = l[1];
	l = result;
	println!("{:?}", l);
}