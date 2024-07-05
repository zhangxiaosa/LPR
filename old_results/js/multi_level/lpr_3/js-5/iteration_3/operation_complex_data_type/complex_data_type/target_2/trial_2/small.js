function opt() {
	function a() {}
	const b = a;
	let e = a;
	e.prototype = undefined;
	({
		"prototype": a
	} = b);
	return a;
}