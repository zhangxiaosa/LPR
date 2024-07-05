function opt() {
	let e = new Proxy(function () {}, {});
	e.prototype = undefined;
	({ "prototype": function () {} } = function () {});
	return function () {};
}