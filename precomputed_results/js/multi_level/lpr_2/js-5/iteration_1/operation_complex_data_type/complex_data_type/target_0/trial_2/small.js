function opt() {
	function a() {}
	const d = PROXY;
	let f;
	const e = new d(a, {});
	e.prototype = f;
	({"prototype": a} = a);
	const g = a;
	return g;
}