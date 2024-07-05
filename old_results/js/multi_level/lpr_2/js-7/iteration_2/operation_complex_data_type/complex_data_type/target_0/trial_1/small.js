function opt() {
	const b = new Proxy([], Proxy);
	b.valueOf = function() {};
	const arrayLength = b.length;
	const arrayPrototype = b.__proto__;
	const arrayConstructor = b.constructor;
	return isFinite(b);
}