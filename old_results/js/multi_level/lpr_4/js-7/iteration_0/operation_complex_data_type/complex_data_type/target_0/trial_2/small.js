function opt() {
	const a = [];
	const b = {};
	const d = false;

	b.valueOf = function() {};

	const f = isFinite(b);
	return f;
}