function opt() {
	Array.prototype.unshift(4294967297);
	Array.prototype.length = 256;
	const g = Array.prototype.pop();
	return g;
}