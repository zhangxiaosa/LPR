function opt() {
	const a = new Uint8Array();
	const b = a.__proto__;
	const c = b.unshift(a);
	const d = Array.prototype.toLocaleString.call(a);
	const e = d.padStart(c);
	return e;
}