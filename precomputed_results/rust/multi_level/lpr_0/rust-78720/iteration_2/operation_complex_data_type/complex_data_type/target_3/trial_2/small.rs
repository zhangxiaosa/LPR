fn a() -> impl b {
	let x: String = "".to_string();
	x.d("")
}

trait b {
	fn d<T>(self, e: T) -> f<T> {}
}

struct f<T> {
	h: T,
}

impl<T> b for T {}
