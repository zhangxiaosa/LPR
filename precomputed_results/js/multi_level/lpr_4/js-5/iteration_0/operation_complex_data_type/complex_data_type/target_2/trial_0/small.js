function opt() {
	function a() {}
	const b = a;
	let c = {};
	let d = Proxy;
	let e = {
		b: a,
		c: {},
		d: Proxy,
		f: undefined,
		prototype: a,
		g: a
	};
	let f;
	e.prototype = f;
	({
		"prototype": a
	} = b);
	const g = a;
	return g;
}