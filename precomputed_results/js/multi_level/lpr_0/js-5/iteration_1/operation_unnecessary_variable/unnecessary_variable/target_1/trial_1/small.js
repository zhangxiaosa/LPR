function opt() {
	return Object.setPrototypeOf(new Proxy(function() {}, {}), undefined);
}