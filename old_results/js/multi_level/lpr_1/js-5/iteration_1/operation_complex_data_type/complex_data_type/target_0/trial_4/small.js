function opt() {
	function a() {}
	let e_target = a;
	let e_handler = {};
	let e = new Proxy(e_target, e_handler);
	e.prototype = undefined;
	let a_prototype = a.prototype;
	a = a_prototype;
	const g = a;
	return g;
}