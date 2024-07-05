function opt() {
	const a = [];
	const b = Object.getPrototypeOf(a);
	const c = b.unshift(b);
	const d = c.toLocaleString();
	const e = d.replace(String(c), '');
	return e;
}