function opt() {
	const b_target = [];
	const b_handler = Proxy;
	const b_valueOf = () => {};
	b_target.valueOf = b_valueOf;
	return isFinite(b_target);
}