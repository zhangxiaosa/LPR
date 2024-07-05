function opt() {
	function a() {}
	const e = {};
	e.prototype = undefined;
	({ "prototype": a } = a);
	return a;
}