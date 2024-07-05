function opt() {
	const a = [];
	const b = [];
	const c = [];
	c.__proto__ = b;
	const d = c.unshift(9007199254740991);
	const e = Reflect.get(a, 127);
	return e;
}