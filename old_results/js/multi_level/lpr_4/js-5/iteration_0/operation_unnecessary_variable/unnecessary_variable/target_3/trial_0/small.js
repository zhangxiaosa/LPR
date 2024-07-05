function opt() {
	function a() {}
	(new Proxy(a, {})).prototype = a;
	({
		"prototype": a
	} = a);
	const g = a;
	return g;
}