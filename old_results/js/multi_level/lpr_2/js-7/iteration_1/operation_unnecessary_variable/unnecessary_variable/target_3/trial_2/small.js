function opt() {
	const b = new Proxy([], Proxy);
	return isFinite(b);
}