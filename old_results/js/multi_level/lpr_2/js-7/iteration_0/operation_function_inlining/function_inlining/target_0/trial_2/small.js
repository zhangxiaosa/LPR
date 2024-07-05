function opt() {
	const a = [];
	const b = new Proxy(a, Proxy);
	b.valueOf = function () {
		// Inlined code of function c
	};

	const d = isFinite(b.valueOf());
	return d;
}