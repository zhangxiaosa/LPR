function opt() {
	const result = isFinite(new Proxy([], Proxy));
	return result;
}