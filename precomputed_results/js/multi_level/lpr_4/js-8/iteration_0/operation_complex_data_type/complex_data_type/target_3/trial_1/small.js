function opt() {
	const a = [];
	let b = a.__proto__;
	const c = b.toLocaleString();
	const arr = [c, ...b];
	return arr.length;
}