fn d() {
	let e;
	{
		let c;
		e = c;
	}
	assert_eq!(e, e);
}