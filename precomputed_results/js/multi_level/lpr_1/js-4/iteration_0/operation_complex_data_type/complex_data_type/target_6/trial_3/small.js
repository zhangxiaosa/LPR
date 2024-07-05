function opt() {
	const arr = [];
	let proto = arr.__proto__;

	const unshiftValue = 4294967297;
	proto.unshift(unshiftValue);
	proto.length = 256;

	const d = [];
	const e = Array.prototype;
	let g = e.pop();

	return g;
}