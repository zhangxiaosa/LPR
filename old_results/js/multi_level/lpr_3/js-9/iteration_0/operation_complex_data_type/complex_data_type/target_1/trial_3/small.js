function opt() {
	let a = [];
	let b = [];
	let c = b.__proto__;
	let d = c.unshift(9007199254740991);
	let e = Reflect.get(a, 127);
	let optimized = b;
	c = optimized.__proto__;
	d = c.unshift(9007199254740991);
	e = Reflect.get(a, 127);
	return optimized;
}