function opt() {
	const b = [];
	b.valueOf = function() {};
	return isFinite(b);
}