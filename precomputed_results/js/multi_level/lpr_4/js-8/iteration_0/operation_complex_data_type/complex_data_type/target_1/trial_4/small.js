function opt() {
	try {
		const a = [];
		const b = a.__proto__;
		const c = b.toLocaleString();
		const d = a.unshift(c);
	} catch {
		const e = function() {};
	}

	return e;
}