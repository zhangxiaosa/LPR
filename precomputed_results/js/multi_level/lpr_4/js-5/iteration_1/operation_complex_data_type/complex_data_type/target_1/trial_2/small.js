function opt() {
	function a() {}
	new Proxy(a, {}).prototype = undefined;
	({
		"prototype": a
	} = a);
	const g = a;
	return g;
}