function opt() {
	const b = Array.prototype;
	const unshiftResult = b.unshift(4294967297);
	const c = unshiftResult;
	b.length = 256;
	const e = Array.prototype;
	const popResult = e.pop();
	const f = popResult;
	const g = f;
	return g;
}