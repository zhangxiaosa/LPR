function opt() {
	const b_proxy = new Proxy([], Proxy);
	const b_valueOf = () => {};
	b_proxy.valueOf = b_valueOf;
	const result = isFinite(b_proxy);
	return result;
}