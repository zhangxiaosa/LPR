function opt() {
	const a = 0;
	const b = new Proxy(a, Proxy);
	b.valueOf = () => {};
	return isFinite(b);
}