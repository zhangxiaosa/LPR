fn d() -> u64 {
	enum Option<T> {
		Some(T),
		None,
	}
	fn n(o: &[[i32; 2]]) -> u64 {
		let mut ae = String::new();
		ae += "00";
		if let Ok(r) = ae.parse() {
			r
		} else {
			Option::None
		}
	}
	let o: [[i32; 2]; 16] = Default::default();
	match n(&o) {
		Some(_) => Some(20313839404245u64),
		_ => None,
	}
}

fn main() {
	assert_eq!(d(), Some(20313839404245u64));
}