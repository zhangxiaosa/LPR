function opt() {
	const arr = [];
	const proto = Object.getPrototypeOf(arr);

	proto.unshift(4294967297);
	proto.length = 256;

	const d = [];
	const e = Object.getPrototypeOf(Array);

	const f = e.pop();
	const g = f;

	return g;
}