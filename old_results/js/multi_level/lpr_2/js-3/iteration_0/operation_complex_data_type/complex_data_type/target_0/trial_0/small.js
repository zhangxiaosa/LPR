function opt() {
	const a = [];
	const b = a.__proto__;
	const c = b.unshift(undefined);

	function d() {}
	const e = d.toString();
	const f = e.padEnd(c);
	return f;
}