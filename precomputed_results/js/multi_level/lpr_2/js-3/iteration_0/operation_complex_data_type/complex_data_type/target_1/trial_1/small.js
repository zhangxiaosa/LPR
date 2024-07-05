function opt() {
	const a = [];
	const b = Object.getPrototypeOf(a);
	const c = b.unshift(undefined);

	function d() {}
	const e = d.toString();
	const f = e.padEnd(c);

	return f;
}