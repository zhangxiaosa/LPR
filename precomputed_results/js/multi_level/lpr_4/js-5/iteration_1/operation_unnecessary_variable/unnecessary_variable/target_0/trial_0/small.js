function opt() {
	new Proxy(a, {}).prototype = undefined;
	({ "prototype": g } = a);
	return a;
}