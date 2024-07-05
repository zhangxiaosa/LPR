function main() {
	const a = [];
	const b = a.__proto__;
	b.unshift(4294967297);
	b.length = 256;
	const e = [].__proto__;
	const f = e.pop();
	const g = f;
	return g;
}
