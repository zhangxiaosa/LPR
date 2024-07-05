function opt() {
	const a = [];
	const b = Array.prototype;

	// Optimize: Remove `unshift` and `toLocaleString` calls
	const c = b;
	const d = c.toLocaleString();

	// Optimize: Remove `replace` call, as it's missing an argument
	const e = d;

	return e;
}