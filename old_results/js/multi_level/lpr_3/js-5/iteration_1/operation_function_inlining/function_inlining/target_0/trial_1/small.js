function opt() {
	const b = function() {};
	let d = Proxy;
	let e = new Proxy(b, {});
	{"prototype": b} = b;
	const g = function() {};
	return g;
}