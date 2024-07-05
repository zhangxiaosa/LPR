function opt() {
	function a() {}
	a.prototype = undefined;
	({
		"prototype": a
	} = a);
	return a;
}