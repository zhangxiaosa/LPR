function opt() {
	function a() {}
	const b = a;
	let e = new Proxy(b, {});
	e.prototype = undefined;
	({
		"prototype": a
	} = b);
	let eTarget = b;
	let eHandler = {};
	let ePrototype = undefined;
	return a;
}