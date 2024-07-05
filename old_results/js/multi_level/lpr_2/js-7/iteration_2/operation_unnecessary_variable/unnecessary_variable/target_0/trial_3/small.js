function opt() {
	const b = new Proxy([], Proxy);
	const valueOfFn = function() {};
	b.valueOf = valueOfFn;
	return isFinite(b);
}