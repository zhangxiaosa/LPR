function opt() {
	const b = [];
	b.valueOf = () => {};
	const isBFinite = isFinite(b);
	return isBFinite;
}