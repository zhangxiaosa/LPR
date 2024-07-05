function opt() {
	const a = [ArrayBufferView];
	const b = a.__proto__;
	const c = b.unshift(a);
	const d = a.toLocaleString();
	const e = d.padStart(c);
	return e;
}