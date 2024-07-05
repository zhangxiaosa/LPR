fn a(b: &i32) -> &i32 {
	b
}

fn d() {
	let e;
	assert_eq!(a, e);
}
