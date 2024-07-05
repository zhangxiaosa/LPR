function opt() {
	const a = [];
	const b = a.__proto__;
	const c = [];
	c.unshift(b);
	const d = c.toLocaleString();
	const e = d.replace(c);
	return e;
}